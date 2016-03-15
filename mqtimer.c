#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "timer.h"

#define MSGSZ     128
#define TIMEOUT_MS 2000 

typedef int (fcallptr) ();

int sum (int a, int b, int *c);
int subtract (int a, int b);
int mul (int a, int b);
int divab (int a, int b);

struct function_table
{
  char *name;
  fcallptr *some_fun;
};
struct function_table my_table[] = {
  {"sum", (fcallptr *) & sum},
  {"subtract", (fcallptr *) & subtract},
  {"multiplication", (fcallptr *) & mul},
  {"division", (fcallptr *) & divab}
};

// Declare the message structure.
typedef struct msgbuf {
         long    mtype;
         char    mtext[MSGSZ];
         } message_buf;

char *gettime()
{
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    return asctime(tm);
    //printf("asctime = %s\n", asctime(tm))
}

void sendTimerMsg(void *data)
{
    message_buf sbuf;
    size_t buf_length;
    int *msqid = data;
    
    // We'll send message type 1
    sbuf.mtype = 1;
    (void) strcpy(sbuf.mtext, "Did you get this?");
    buf_length = strlen(sbuf.mtext) + 1 ;
    // * Send a message.
    if (msgsnd(*msqid, &sbuf, buf_length, IPC_NOWAIT) < 0) {
       printf ("%d, %d, %s, %d\n", *msqid, sbuf.mtype, sbuf.mtext, buf_length);
        perror("msgsnd");
        exit(1);
    }
   /*else 
      printf("Message: \"%s\" Sent\n", sbuf.mtext);*/
}

void call_scheduler(int fno)
{
  printf ("Function in table :%s and return value on opearnds 4, 2 is :%d\n",
     my_table[fno].name, my_table[fno].some_fun (4, 2));
}

main()
{
    int msqid;
    int msgflg = IPC_CREAT | 0666;
    key_t key;
    message_buf rbuf;
    size_t buf_length;
    ltimer_t scheduleTimer;
     int randomnumber;
    /*
     * Get the message queue id for the
     * "name" 1234, which was created by
     * the server.
     */
    key = 1234;
    (void) fprintf(stderr, "\nmsgget: Calling msgget(%#lx,\
        %#o)\n",key, msgflg);
    if ((msqid = msgget(key, msgflg )) < 0) {
        perror("msgget");
        exit(1);
    }
    else 
     (void) fprintf(stderr,"msgget: msgget succeeded: msqid = %d\n", msqid);
   
    /* Create the Timer */
    scheduleTimer.timerid = ltimerCreate (&scheduleTimer,
                           (callptr *) & sendTimerMsg,
                           &msqid);

   ltimerStart (scheduleTimer.timerid, TIMEOUT_MS);  
   srand(time(NULL));
   while(1){
    // * Receive an answer of message type 1.
    if (msgrcv(msqid, &rbuf, MSGSZ, 1, 0) < 0) {
        if (errno == EINTR)
            continue;
        else
        {
            perror("msgrcv");
            exit(1);
        }
    }
     //* Print the answer.
    printf("[%d]rcvd from queue %s at %s\n", rbuf.mtype,rbuf.mtext, gettime());
    ltimerStart (scheduleTimer.timerid, TIMEOUT_MS); 
    /* Process the action based on Message*/
    randomnumber = (rand() % 3) + 1;
    printf("Rand :%d\n", randomnumber);
    call_scheduler(randomnumber);
     
   }
}

int
sum (int a, int b, int *c)
{
  *c = a + b;
  return a + b;
}

int
subtract (int a, int b)
{
  return a - b;
}

int
mul (int a, int b)
{
  return a * b;
}

int
divab (int a, int b)
{
  return a / b;
}

