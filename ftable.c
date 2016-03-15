#include <stdio.h>
#include <string.h>


int sum (int a, int b, int *c);
int subtract (int a, int b);
int mul (int a, int b);
int div (int a, int b);
typedef int (callptr) ();
//int (*p[4]) (int x, int y);
struct function_table
{
  char *name;
  callptr *some_fun;
  //int (*some_fun) (int x, int y);
  //void (*some_fun)(int arg1, double arg2);
};

struct function_table my_table[] = {
  {"sum", (callptr *) & sum},
  {"subtract", (callptr *) & subtract},
  {"multiplication", (callptr *) & mul},
  {"division", (callptr *) & div}
};

int
main (void)
{
  //int result;
  //int i, j, op;
  char buf[64];
  int *cval;
  cval = (void *) buf;
  *cval = 0;
  (void) my_table[0].some_fun (4, 2, (void *) buf);
  printf ("First function in table :%s and return value :%d and c:%d\n",
	  my_table[0].name, my_table[0].some_fun (4, 2, cval), *cval);
  printf ("Second function in table :%s and return value :%d\n",
	  my_table[1].name, my_table[1].some_fun (4, 2));
  printf ("Third function in table :%s and return value :%d\n",
	  my_table[2].name, my_table[2].some_fun (4, 2));
  printf ("Fourth function in table :%s and return value :%d\n",
	  my_table[3].name, my_table[3].some_fun (4, 2));
  return 0;
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
div (int a, int b)
{
  return a / b;
}
