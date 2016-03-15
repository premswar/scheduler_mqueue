<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
<meta name="robots" content="nofollow" />
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
<meta name="generator" content="0.11-rc2 (d0ffee7f9877+)" />
<meta http-equiv="X-UA-Compatible" content="IE=8" />
<link rel="icon" href="/default/img/icon.png" type="image/png" />
<link rel="stylesheet" type="text/css" media="all"
    title="Default" href="/default/style.css" />
<link rel="alternate stylesheet" type="text/css" media="all"
    title="Paper White" href="/default/print.css" />
<link rel="stylesheet" type="text/css" href="/default/print.css" media="print" />
<link rel="stylesheet" type="text/css" href="/default/jquery.tooltip.css" />

<link rel="search" href="/opensearch"
    type="application/opensearchdescription+xml"
    title="OpenGrok Search for current project(s)" />
<script type="text/javascript" src="/jquery-1.4.4.min.js"></script>
<script type="text/javascript" src="/jquery.tooltip-1.3.pack.js"></script>

<script type="text/javascript" src="/utils.js"></script>
<title>Super User's BSD Cross Reference: /OpenBSD/sys/sys/queue.h</title>
</head><body>
<script type="text/javascript">/* <![CDATA[ */
    document.hash = 'null';document.rev = '';document.link = '/xref/OpenBSD/sys/sys/queue.h';document.annotate = false;
    document.domReady.push(function() {domReadyMast();});
    document.pageReady.push(function() { pageReadyMast();});
/* ]]> */</script>
<div id="page">
    <div id="whole_header">
        <form action="/search">
<div id="header">
<a href="/"><span id="MastheadLogo"></span></a>


    <div id="pagetitle"><span id="filename"
                    >Super User's BSD Cross Reference: queue.h</span></div>
</div>
<div id="Masthead">
    <tt><a href="/xref/">xref</a>: /<a href="/xref/OpenBSD/">OpenBSD</a>/<a href="/xref/OpenBSD/sys/">sys</a>/<a href="/xref/OpenBSD/sys/sys/">sys</a>/<a href="/xref/OpenBSD/sys/sys/queue.h">queue.h</a></tt>
</div>
<div id="bar">
    <ul>
        <li><a href="/"><span id="home"></span>Home</a></li>
    <li><a href="http://www.openbsd.org/cgi-bin/cvsweb/src/sys/sys/queue.h">CVSweb</a></li><li><a href="http://cvsweb.allbsd.org/cvsweb.cgi/src/sys/sys/queue.h?cvsroot=openbsd"
		 title='CVSweb from allbsd.org'>allbsd</a></li><li><a href="http://git.freebsd.your.org/gitweb/?p=openbsd.git;a=history;f=sys/sys/queue.h"><small>Gitweb history</small></a></li><li><a href="#" onclick="javascript:lntoggle();return false;"
            title="Show or hide line numbers (might be slower if file has more than 10 000 lines)."><span id="line"></span>Line#</a></li><li><a
            href="#" onclick="javascript:lsttoggle();return false;"
            title="Show or hide symbol list."><span id="defbox"></span>Navigate</a></li><li><a href="/raw/OpenBSD/sys/sys/queue.h"><span id="download"></span>Download</a></li><li><input type="text" id="search" name="q" class="q" />
            <input type="submit" value="Search" class="submit" /></li><li><input type="checkbox" name="path" value="/OpenBSD/sys/sys/" /> only in <b>queue.h</b></li>
        
    </ul>
    <input type="hidden" name="project" value="OpenBSD" />
</div>
        </form>
    </div>
<div id="content">
<script type="text/javascript">/* <![CDATA[ */
document.pageReady.push(function() { pageReadyList();});
/* ]]> */</script>

<div id="src">
    <pre><script type="text/javascript">/* <![CDATA[ */
function get_sym_list(){return [["Macro","xm",[["LIST_EMPTY",183],["LIST_END",182],["LIST_ENTRY",172],["LIST_FIRST",181],["LIST_FOREACH",186],["LIST_FOREACH_SAFE",191],["LIST_HEAD",164],["LIST_HEAD_INITIALIZER",169],["LIST_INIT",199],["LIST_INSERT_AFTER",203],["LIST_INSERT_BEFORE",211],["LIST_INSERT_HEAD",218],["LIST_NEXT",184],["LIST_REMOVE",225],["LIST_REPLACE",234],["SIMPLEQ_CONCAT",316],["SIMPLEQ_EMPTY",266],["SIMPLEQ_END",265],["SIMPLEQ_ENTRY",256],["SIMPLEQ_FIRST",264],["SIMPLEQ_FOREACH",269],["SIMPLEQ_FOREACH_SAFE",274],["SIMPLEQ_HEAD",247],["SIMPLEQ_HEAD_INITIALIZER",253],["SIMPLEQ_INIT",282],["SIMPLEQ_INSERT_AFTER",299],["SIMPLEQ_INSERT_HEAD",287],["SIMPLEQ_INSERT_TAIL",293],["SIMPLEQ_NEXT",267],["SIMPLEQ_REMOVE_AFTER",310],["SIMPLEQ_REMOVE_HEAD",305],["SLIST_EMPTY",109],["SLIST_END",108],["SLIST_ENTRY",99],["SLIST_FIRST",107],["SLIST_FOREACH",112],["SLIST_FOREACH_SAFE",117],["SLIST_HEAD",91],["SLIST_HEAD_INITIALIZER",96],["SLIST_INIT",125],["SLIST_INSERT_AFTER",129],["SLIST_INSERT_HEAD",134],["SLIST_NEXT",110],["SLIST_REMOVE",147],["SLIST_REMOVE_AFTER",139],["SLIST_REMOVE_HEAD",143],["TAILQ_CONCAT",524],["TAILQ_EMPTY",433],["TAILQ_END",426],["TAILQ_ENTRY",416],["TAILQ_FIRST",425],["TAILQ_FOREACH",436],["TAILQ_FOREACH_REVERSE",448],["TAILQ_FOREACH_REVERSE_SAFE",453],["TAILQ_FOREACH_SAFE",441],["TAILQ_HEAD",407],["TAILQ_HEAD_INITIALIZER",413],["TAILQ_INIT",462],["TAILQ_INSERT_AFTER",484],["TAILQ_INSERT_BEFORE",494],["TAILQ_INSERT_HEAD",467],["TAILQ_INSERT_TAIL",477],["TAILQ_LAST",428],["TAILQ_NEXT",427],["TAILQ_PREV",431],["TAILQ_REMOVE",501],["TAILQ_REPLACE",512],["XSIMPLEQ_EMPTY",346],["XSIMPLEQ_END",345],["XSIMPLEQ_ENTRY",334],["XSIMPLEQ_FIRST",344],["XSIMPLEQ_FOREACH",350],["XSIMPLEQ_FOREACH_SAFE",355],["XSIMPLEQ_HEAD",327],["XSIMPLEQ_INIT",363],["XSIMPLEQ_INSERT_AFTER",382],["XSIMPLEQ_INSERT_HEAD",369],["XSIMPLEQ_INSERT_TAIL",376],["XSIMPLEQ_NEXT",347],["XSIMPLEQ_REMOVE_AFTER",395],["XSIMPLEQ_REMOVE_HEAD",389],["XSIMPLEQ_XOR",342],["_Q_INVALIDATE",83],["_Q_INVALIDATE",85],["_SYS_QUEUE_H_",36]]]];} /* ]]> */</script><a class="l" name="1" href="#1">1</a><span class="c">/*  $OpenBSD: <a href="/s?path=queue.h&amp;project=OpenBSD">queue.h</a>,v 1.43 2015/12/28 19:38:40 millert Exp $  */</span>
<a class="l" name="2" href="#2">2</a><span class="c">/*  $NetBSD: <a href="/s?path=queue.h&amp;project=OpenBSD">queue.h</a>,v 1.11 1996/05/16 05:17:14 mycroft Exp $   */</span>
<a class="l" name="3" href="#3">3</a>
<a class="l" name="4" href="#4">4</a><span class="c">/*
<a class="l" name="5" href="#5">5</a> * Copyright (c) 1991, 1993
<a class="l" name="6" href="#6">6</a> *  The Regents of the University of California.  All rights reserved.
<a class="l" name="7" href="#7">7</a> *
<a class="l" name="8" href="#8">8</a> * Redistribution and use in source and binary forms, with or without
<a class="l" name="9" href="#9">9</a> * modification, are permitted provided that the following conditions
<a class="hl" name="10" href="#10">10</a> * are met:
<a class="l" name="11" href="#11">11</a> * 1. Redistributions of source code must retain the above copyright
<a class="l" name="12" href="#12">12</a> *    notice, this list of conditions and the following disclaimer.
<a class="l" name="13" href="#13">13</a> * 2. Redistributions in binary form must reproduce the above copyright
<a class="l" name="14" href="#14">14</a> *    notice, this list of conditions and the following disclaimer in the
<a class="l" name="15" href="#15">15</a> *    documentation <a href="/s?path=and/">and</a>/<a href="/s?path=and/or">or</a> other materials provided with the distribution.
<a class="l" name="16" href="#16">16</a> * 3. Neither the name of the University nor the names of its contributors
<a class="l" name="17" href="#17">17</a> *    may be used to endorse or promote products derived from this software
<a class="l" name="18" href="#18">18</a> *    without specific prior written permission.
<a class="l" name="19" href="#19">19</a> *
<a class="hl" name="20" href="#20">20</a> * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
<a class="l" name="21" href="#21">21</a> * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
<a class="l" name="22" href="#22">22</a> * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
<a class="l" name="23" href="#23">23</a> * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
<a class="l" name="24" href="#24">24</a> * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
<a class="l" name="25" href="#25">25</a> * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
<a class="l" name="26" href="#26">26</a> * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
<a class="l" name="27" href="#27">27</a> * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
<a class="l" name="28" href="#28">28</a> * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
<a class="l" name="29" href="#29">29</a> * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
<a class="hl" name="30" href="#30">30</a> * SUCH DAMAGE.
<a class="l" name="31" href="#31">31</a> *
<a class="l" name="32" href="#32">32</a> *  @(#)<a href="/s?path=queue.h&amp;project=OpenBSD">queue.h</a> 8.5 (Berkeley) 8/20/94
<a class="l" name="33" href="#33">33</a> */</span>
<a class="l" name="34" href="#34">34</a>
<a class="l" name="35" href="#35">35</a>#<b>ifndef</b> <a class="d" href="#_SYS_QUEUE_H_">_SYS_QUEUE_H_</a>
<a class="l" name="36" href="#36">36</a>#<b>define</b> <a class="xm" name="_SYS_QUEUE_H_"/><a href="/s?refs=_SYS_QUEUE_H_&amp;project=OpenBSD" class="xm">_SYS_QUEUE_H_</a>
<a class="l" name="37" href="#37">37</a>
<a class="l" name="38" href="#38">38</a><span class="c">/*
<a class="l" name="39" href="#39">39</a> * This file defines five types of data structures: singly-linked lists,
<a class="hl" name="40" href="#40">40</a> * lists, simple queues, tail queues and XOR simple queues.
<a class="l" name="41" href="#41">41</a> *
<a class="l" name="42" href="#42">42</a> *
<a class="l" name="43" href="#43">43</a> * A singly-linked list is headed by a single forward pointer. The elements
<a class="l" name="44" href="#44">44</a> * are singly linked for minimum space and pointer manipulation overhead at
<a class="l" name="45" href="#45">45</a> * the expense of O(n) removal for arbitrary elements. New elements can be
<a class="l" name="46" href="#46">46</a> * added to the list after an existing element or at the head of the list.
<a class="l" name="47" href="#47">47</a> * Elements being removed from the head of the list should use the explicit
<a class="l" name="48" href="#48">48</a> * macro for this purpose for optimum efficiency. A singly-linked list may
<a class="l" name="49" href="#49">49</a> * only be traversed in the forward direction.  Singly-linked lists are ideal
<a class="hl" name="50" href="#50">50</a> * for applications with large datasets and few or no removals or for
<a class="l" name="51" href="#51">51</a> * implementing a LIFO queue.
<a class="l" name="52" href="#52">52</a> *
<a class="l" name="53" href="#53">53</a> * A list is headed by a single forward pointer (or an array of forward
<a class="l" name="54" href="#54">54</a> * pointers for a hash table header). The elements are doubly linked
<a class="l" name="55" href="#55">55</a> * so that an arbitrary element can be removed without a need to
<a class="l" name="56" href="#56">56</a> * traverse the list. New elements can be added to the list before
<a class="l" name="57" href="#57">57</a> * or after an existing element or at the head of the list. A list
<a class="l" name="58" href="#58">58</a> * may only be traversed in the forward direction.
<a class="l" name="59" href="#59">59</a> *
<a class="hl" name="60" href="#60">60</a> * A simple queue is headed by a pair of pointers, one to the head of the
<a class="l" name="61" href="#61">61</a> * list and the other to the tail of the list. The elements are singly
<a class="l" name="62" href="#62">62</a> * linked to save space, so elements can only be removed from the
<a class="l" name="63" href="#63">63</a> * head of the list. New elements can be added to the list before or after
<a class="l" name="64" href="#64">64</a> * an existing element, at the head of the list, or at the end of the
<a class="l" name="65" href="#65">65</a> * list. A simple queue may only be traversed in the forward direction.
<a class="l" name="66" href="#66">66</a> *
<a class="l" name="67" href="#67">67</a> * A tail queue is headed by a pair of pointers, one to the head of the
<a class="l" name="68" href="#68">68</a> * list and the other to the tail of the list. The elements are doubly
<a class="l" name="69" href="#69">69</a> * linked so that an arbitrary element can be removed without a need to
<a class="hl" name="70" href="#70">70</a> * traverse the list. New elements can be added to the list before or
<a class="l" name="71" href="#71">71</a> * after an existing element, at the head of the list, or at the end of
<a class="l" name="72" href="#72">72</a> * the list. A tail queue may be traversed in either direction.
<a class="l" name="73" href="#73">73</a> *
<a class="l" name="74" href="#74">74</a> * An XOR simple queue is used in the same way as a regular simple queue.
<a class="l" name="75" href="#75">75</a> * The difference is that the head structure also includes a "cookie" that
<a class="l" name="76" href="#76">76</a> * is XOR'd with the queue pointer (first, last or next) to generate the
<a class="l" name="77" href="#77">77</a> * real pointer value.
<a class="l" name="78" href="#78">78</a> *
<a class="l" name="79" href="#79">79</a> * For details on the use of these macros, see the queue(3) manual page.
<a class="hl" name="80" href="#80">80</a> */</span>
<a class="l" name="81" href="#81">81</a>
<a class="l" name="82" href="#82">82</a>#<b>if</b> <b>defined</b>(<a href="/s?defs=QUEUE_MACRO_DEBUG&amp;project=OpenBSD">QUEUE_MACRO_DEBUG</a>) || (<b>defined</b>(<a href="/s?defs=_KERNEL&amp;project=OpenBSD">_KERNEL</a>) &amp;&amp; <b>defined</b>(<a href="/s?defs=DIAGNOSTIC&amp;project=OpenBSD">DIAGNOSTIC</a>))
<a class="l" name="83" href="#83">83</a>#<b>define</b> <a class="xm" name="_Q_INVALIDATE"/><a href="/s?refs=_Q_INVALIDATE&amp;project=OpenBSD" class="xm">_Q_INVALIDATE</a>(a) (a) = ((<b>void</b> *)-<span class="n">1</span>)
<a class="l" name="84" href="#84">84</a>#<b>else</b>
<a class="l" name="85" href="#85">85</a>#<b>define</b> <a class="xm" name="_Q_INVALIDATE"/><a href="/s?refs=_Q_INVALIDATE&amp;project=OpenBSD" class="xm">_Q_INVALIDATE</a>(a)
<a class="l" name="86" href="#86">86</a>#<b>endif</b>
<a class="l" name="87" href="#87">87</a>
<a class="l" name="88" href="#88">88</a><span class="c">/*
<a class="l" name="89" href="#89">89</a> * Singly-linked List definitions.
<a class="hl" name="90" href="#90">90</a> */</span>
<a class="l" name="91" href="#91">91</a>#<b>define</b> <a class="xm" name="SLIST_HEAD"/><a href="/s?refs=SLIST_HEAD&amp;project=OpenBSD" class="xm">SLIST_HEAD</a>(<a href="/s?defs=name&amp;project=OpenBSD">name</a>, <a href="/s?defs=type&amp;project=OpenBSD">type</a>)                      \
<a class="l" name="92" href="#92">92</a><b>struct</b> <a href="/s?defs=name&amp;project=OpenBSD">name</a> {                               \
<a class="l" name="93" href="#93">93</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> *<a href="/s?defs=slh_first&amp;project=OpenBSD">slh_first</a>; <span class="c">/* first element */</span>         \
<a class="l" name="94" href="#94">94</a>}
<a class="l" name="95" href="#95">95</a>
<a class="l" name="96" href="#96">96</a>#<b>define</b> <a class="xm" name="SLIST_HEAD_INITIALIZER"/><a href="/s?refs=SLIST_HEAD_INITIALIZER&amp;project=OpenBSD" class="xm">SLIST_HEAD_INITIALIZER</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)                    \
<a class="l" name="97" href="#97">97</a>    { <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a> }
<a class="l" name="98" href="#98">98</a>
<a class="l" name="99" href="#99">99</a>#<b>define</b> <a class="xm" name="SLIST_ENTRY"/><a href="/s?refs=SLIST_ENTRY&amp;project=OpenBSD" class="xm">SLIST_ENTRY</a>(<a href="/s?defs=type&amp;project=OpenBSD">type</a>)                       \
<a class="hl" name="100" href="#100">100</a><b>struct</b> {                                \
<a class="l" name="101" href="#101">101</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> *<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a>;  <span class="c">/* next element */</span>          \
<a class="l" name="102" href="#102">102</a>}
<a class="l" name="103" href="#103">103</a>
<a class="l" name="104" href="#104">104</a><span class="c">/*
<a class="l" name="105" href="#105">105</a> * Singly-linked List access methods.
<a class="l" name="106" href="#106">106</a> */</span>
<a class="l" name="107" href="#107">107</a>#<b>define</b> <a class="xm" name="SLIST_FIRST"/><a href="/s?refs=SLIST_FIRST&amp;project=OpenBSD" class="xm">SLIST_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)   ((<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=slh_first&amp;project=OpenBSD">slh_first</a>)
<a class="l" name="108" href="#108">108</a>#<b>define</b> <a class="xm" name="SLIST_END"/><a href="/s?refs=SLIST_END&amp;project=OpenBSD" class="xm">SLIST_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)     <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>
<a class="l" name="109" href="#109">109</a>#<b>define</b> <a class="xm" name="SLIST_EMPTY"/><a href="/s?refs=SLIST_EMPTY&amp;project=OpenBSD" class="xm">SLIST_EMPTY</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)   (<a class="d" href="#SLIST_FIRST">SLIST_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) == <a class="d" href="#SLIST_END">SLIST_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>))
<a class="hl" name="110" href="#110">110</a>#<b>define</b> <a class="xm" name="SLIST_NEXT"/><a href="/s?refs=SLIST_NEXT&amp;project=OpenBSD" class="xm">SLIST_NEXT</a>(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)  ((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a>)
<a class="l" name="111" href="#111">111</a>
<a class="l" name="112" href="#112">112</a>#<b>define</b> <a class="xm" name="SLIST_FOREACH"/><a href="/s?refs=SLIST_FOREACH&amp;project=OpenBSD" class="xm">SLIST_FOREACH</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)                 \
<a class="l" name="113" href="#113">113</a>    <b>for</b>((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#SLIST_FIRST">SLIST_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                  \
<a class="l" name="114" href="#114">114</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) != <a class="d" href="#SLIST_END">SLIST_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                   \
<a class="l" name="115" href="#115">115</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#SLIST_NEXT">SLIST_NEXT</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>))
<a class="l" name="116" href="#116">116</a>
<a class="l" name="117" href="#117">117</a>#<b>define</b> <a class="xm" name="SLIST_FOREACH_SAFE"/><a href="/s?refs=SLIST_FOREACH_SAFE&amp;project=OpenBSD" class="xm">SLIST_FOREACH_SAFE</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>, <a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>)          \
<a class="l" name="118" href="#118">118</a>    <b>for</b> ((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#SLIST_FIRST">SLIST_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);             \
<a class="l" name="119" href="#119">119</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) &amp;&amp; ((<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>) = <a class="d" href="#SLIST_NEXT">SLIST_NEXT</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>), <span class="n">1</span>);      \
<a class="hl" name="120" href="#120">120</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = (<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>))
<a class="l" name="121" href="#121">121</a>
<a class="l" name="122" href="#122">122</a><span class="c">/*
<a class="l" name="123" href="#123">123</a> * Singly-linked List functions.
<a class="l" name="124" href="#124">124</a> */</span>
<a class="l" name="125" href="#125">125</a>#<b>define</b> <a class="xm" name="SLIST_INIT"/><a href="/s?refs=SLIST_INIT&amp;project=OpenBSD" class="xm">SLIST_INIT</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) {                      \
<a class="l" name="126" href="#126">126</a>    <a class="d" href="#SLIST_FIRST">SLIST_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) = <a class="d" href="#SLIST_END">SLIST_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                \
<a class="l" name="127" href="#127">127</a>}
<a class="l" name="128" href="#128">128</a>
<a class="l" name="129" href="#129">129</a>#<b>define</b> <a class="xm" name="SLIST_INSERT_AFTER"/><a href="/s?refs=SLIST_INSERT_AFTER&amp;project=OpenBSD" class="xm">SLIST_INSERT_AFTER</a>(<a href="/s?defs=slistelm&amp;project=OpenBSD">slistelm</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {           \
<a class="hl" name="130" href="#130">130</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a> = (<a href="/s?defs=slistelm&amp;project=OpenBSD">slistelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a>;     \
<a class="l" name="131" href="#131">131</a>    (<a href="/s?defs=slistelm&amp;project=OpenBSD">slistelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);             \
<a class="l" name="132" href="#132">132</a>} <b>while</b> (0)
<a class="l" name="133" href="#133">133</a>
<a class="l" name="134" href="#134">134</a>#<b>define</b> <a class="xm" name="SLIST_INSERT_HEAD"/><a href="/s?refs=SLIST_INSERT_HEAD&amp;project=OpenBSD" class="xm">SLIST_INSERT_HEAD</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {            \
<a class="l" name="135" href="#135">135</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a> = (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=slh_first&amp;project=OpenBSD">slh_first</a>;          \
<a class="l" name="136" href="#136">136</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=slh_first&amp;project=OpenBSD">slh_first</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);                  \
<a class="l" name="137" href="#137">137</a>} <b>while</b> (0)
<a class="l" name="138" href="#138">138</a>
<a class="l" name="139" href="#139">139</a>#<b>define</b> <a class="xm" name="SLIST_REMOVE_AFTER"/><a href="/s?refs=SLIST_REMOVE_AFTER&amp;project=OpenBSD" class="xm">SLIST_REMOVE_AFTER</a>(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {             \
<a class="hl" name="140" href="#140">140</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a>;  \
<a class="l" name="141" href="#141">141</a>} <b>while</b> (0)
<a class="l" name="142" href="#142">142</a>
<a class="l" name="143" href="#143">143</a>#<b>define</b> <a class="xm" name="SLIST_REMOVE_HEAD"/><a href="/s?refs=SLIST_REMOVE_HEAD&amp;project=OpenBSD" class="xm">SLIST_REMOVE_HEAD</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {             \
<a class="l" name="144" href="#144">144</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=slh_first&amp;project=OpenBSD">slh_first</a> = (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=slh_first&amp;project=OpenBSD">slh_first</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a>;      \
<a class="l" name="145" href="#145">145</a>} <b>while</b> (0)
<a class="l" name="146" href="#146">146</a>
<a class="l" name="147" href="#147">147</a>#<b>define</b> <a class="xm" name="SLIST_REMOVE"/><a href="/s?refs=SLIST_REMOVE&amp;project=OpenBSD" class="xm">SLIST_REMOVE</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=type&amp;project=OpenBSD">type</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {           \
<a class="l" name="148" href="#148">148</a>    <b>if</b> ((<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=slh_first&amp;project=OpenBSD">slh_first</a> == (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)) {               \
<a class="l" name="149" href="#149">149</a>        <a class="d" href="#SLIST_REMOVE_HEAD">SLIST_REMOVE_HEAD</a>((<a href="/s?defs=head&amp;project=OpenBSD">head</a>), <a href="/s?defs=field&amp;project=OpenBSD">field</a>);           \
<a class="hl" name="150" href="#150">150</a>    } <b>else</b> {                            \
<a class="l" name="151" href="#151">151</a>        <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> *<a href="/s?defs=curelm&amp;project=OpenBSD">curelm</a> = (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=slh_first&amp;project=OpenBSD">slh_first</a>;        \
<a class="l" name="152" href="#152">152</a>                                    \
<a class="l" name="153" href="#153">153</a>        <b>while</b> (<a href="/s?defs=curelm&amp;project=OpenBSD">curelm</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a> != (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>))         \
<a class="l" name="154" href="#154">154</a>            <a href="/s?defs=curelm&amp;project=OpenBSD">curelm</a> = <a href="/s?defs=curelm&amp;project=OpenBSD">curelm</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a>;        \
<a class="l" name="155" href="#155">155</a>        <a href="/s?defs=curelm&amp;project=OpenBSD">curelm</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a> =                \
<a class="l" name="156" href="#156">156</a>            <a href="/s?defs=curelm&amp;project=OpenBSD">curelm</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a>;     \
<a class="l" name="157" href="#157">157</a>    }                               \
<a class="l" name="158" href="#158">158</a>    <a href="/s?defs=_Q_INVALIDATE&amp;project=OpenBSD">_Q_INVALIDATE</a>((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sle_next&amp;project=OpenBSD">sle_next</a>);               \
<a class="l" name="159" href="#159">159</a>} <b>while</b> (0)
<a class="hl" name="160" href="#160">160</a>
<a class="l" name="161" href="#161">161</a><span class="c">/*
<a class="l" name="162" href="#162">162</a> * List definitions.
<a class="l" name="163" href="#163">163</a> */</span>
<a class="l" name="164" href="#164">164</a>#<b>define</b> <a class="xm" name="LIST_HEAD"/><a href="/s?refs=LIST_HEAD&amp;project=OpenBSD" class="xm">LIST_HEAD</a>(<a href="/s?defs=name&amp;project=OpenBSD">name</a>, <a href="/s?defs=type&amp;project=OpenBSD">type</a>)                       \
<a class="l" name="165" href="#165">165</a><b>struct</b> <a href="/s?defs=name&amp;project=OpenBSD">name</a> {                               \
<a class="l" name="166" href="#166">166</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> *<a href="/s?defs=lh_first&amp;project=OpenBSD">lh_first</a>;  <span class="c">/* first element */</span>         \
<a class="l" name="167" href="#167">167</a>}
<a class="l" name="168" href="#168">168</a>
<a class="l" name="169" href="#169">169</a>#<b>define</b> <a class="xm" name="LIST_HEAD_INITIALIZER"/><a href="/s?refs=LIST_HEAD_INITIALIZER&amp;project=OpenBSD" class="xm">LIST_HEAD_INITIALIZER</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)                 \
<a class="hl" name="170" href="#170">170</a>    { <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a> }
<a class="l" name="171" href="#171">171</a>
<a class="l" name="172" href="#172">172</a>#<b>define</b> <a class="xm" name="LIST_ENTRY"/><a href="/s?refs=LIST_ENTRY&amp;project=OpenBSD" class="xm">LIST_ENTRY</a>(<a href="/s?defs=type&amp;project=OpenBSD">type</a>)                        \
<a class="l" name="173" href="#173">173</a><b>struct</b> {                                \
<a class="l" name="174" href="#174">174</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> *<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>;   <span class="c">/* next element */</span>          \
<a class="l" name="175" href="#175">175</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> **<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a>;  <span class="c">/* address of previous next element */</span>  \
<a class="l" name="176" href="#176">176</a>}
<a class="l" name="177" href="#177">177</a>
<a class="l" name="178" href="#178">178</a><span class="c">/*
<a class="l" name="179" href="#179">179</a> * List access methods.
<a class="hl" name="180" href="#180">180</a> */</span>
<a class="l" name="181" href="#181">181</a>#<b>define</b> <a class="xm" name="LIST_FIRST"/><a href="/s?refs=LIST_FIRST&amp;project=OpenBSD" class="xm">LIST_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)        ((<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=lh_first&amp;project=OpenBSD">lh_first</a>)
<a class="l" name="182" href="#182">182</a>#<b>define</b> <a class="xm" name="LIST_END"/><a href="/s?refs=LIST_END&amp;project=OpenBSD" class="xm">LIST_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)          <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>
<a class="l" name="183" href="#183">183</a>#<b>define</b> <a class="xm" name="LIST_EMPTY"/><a href="/s?refs=LIST_EMPTY&amp;project=OpenBSD" class="xm">LIST_EMPTY</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)        (<a class="d" href="#LIST_FIRST">LIST_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) == <a class="d" href="#LIST_END">LIST_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>))
<a class="l" name="184" href="#184">184</a>#<b>define</b> <a class="xm" name="LIST_NEXT"/><a href="/s?refs=LIST_NEXT&amp;project=OpenBSD" class="xm">LIST_NEXT</a>(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)       ((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>)
<a class="l" name="185" href="#185">185</a>
<a class="l" name="186" href="#186">186</a>#<b>define</b> <a class="xm" name="LIST_FOREACH"/><a href="/s?refs=LIST_FOREACH&amp;project=OpenBSD" class="xm">LIST_FOREACH</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)                  \
<a class="l" name="187" href="#187">187</a>    <b>for</b>((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#LIST_FIRST">LIST_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                   \
<a class="l" name="188" href="#188">188</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>)!= <a class="d" href="#LIST_END">LIST_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                 \
<a class="l" name="189" href="#189">189</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#LIST_NEXT">LIST_NEXT</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>))
<a class="hl" name="190" href="#190">190</a>
<a class="l" name="191" href="#191">191</a>#<b>define</b> <a class="xm" name="LIST_FOREACH_SAFE"/><a href="/s?refs=LIST_FOREACH_SAFE&amp;project=OpenBSD" class="xm">LIST_FOREACH_SAFE</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>, <a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>)           \
<a class="l" name="192" href="#192">192</a>    <b>for</b> ((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#LIST_FIRST">LIST_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);              \
<a class="l" name="193" href="#193">193</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) &amp;&amp; ((<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>) = <a class="d" href="#LIST_NEXT">LIST_NEXT</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>), <span class="n">1</span>);       \
<a class="l" name="194" href="#194">194</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = (<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>))
<a class="l" name="195" href="#195">195</a>
<a class="l" name="196" href="#196">196</a><span class="c">/*
<a class="l" name="197" href="#197">197</a> * List functions.
<a class="l" name="198" href="#198">198</a> */</span>
<a class="l" name="199" href="#199">199</a>#<b>define</b> <a class="xm" name="LIST_INIT"/><a href="/s?refs=LIST_INIT&amp;project=OpenBSD" class="xm">LIST_INIT</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) <b>do</b> {                        \
<a class="hl" name="200" href="#200">200</a>    <a class="d" href="#LIST_FIRST">LIST_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) = <a class="d" href="#LIST_END">LIST_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);              \
<a class="l" name="201" href="#201">201</a>} <b>while</b> (0)
<a class="l" name="202" href="#202">202</a>
<a class="l" name="203" href="#203">203</a>#<b>define</b> <a class="xm" name="LIST_INSERT_AFTER"/><a href="/s?refs=LIST_INSERT_AFTER&amp;project=OpenBSD" class="xm">LIST_INSERT_AFTER</a>(<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {         \
<a class="l" name="204" href="#204">204</a>    <b>if</b> (((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a> = (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>) != <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>)  \
<a class="l" name="205" href="#205">205</a>        (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> =       \
<a class="l" name="206" href="#206">206</a>            &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>;              \
<a class="l" name="207" href="#207">207</a>    (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);               \
<a class="l" name="208" href="#208">208</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> = &amp;(<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>;       \
<a class="l" name="209" href="#209">209</a>} <b>while</b> (0)
<a class="hl" name="210" href="#210">210</a>
<a class="l" name="211" href="#211">211</a>#<b>define</b> <a class="xm" name="LIST_INSERT_BEFORE"/><a href="/s?refs=LIST_INSERT_BEFORE&amp;project=OpenBSD" class="xm">LIST_INSERT_BEFORE</a>(<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {            \
<a class="l" name="212" href="#212">212</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> = (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a>;        \
<a class="l" name="213" href="#213">213</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a> = (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>);               \
<a class="l" name="214" href="#214">214</a>    *(<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);              \
<a class="l" name="215" href="#215">215</a>    (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> = &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>;       \
<a class="l" name="216" href="#216">216</a>} <b>while</b> (0)
<a class="l" name="217" href="#217">217</a>
<a class="l" name="218" href="#218">218</a>#<b>define</b> <a class="xm" name="LIST_INSERT_HEAD"/><a href="/s?refs=LIST_INSERT_HEAD&amp;project=OpenBSD" class="xm">LIST_INSERT_HEAD</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {             \
<a class="l" name="219" href="#219">219</a>    <b>if</b> (((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a> = (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=lh_first&amp;project=OpenBSD">lh_first</a>) != <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>)      \
<a class="hl" name="220" href="#220">220</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=lh_first&amp;project=OpenBSD">lh_first</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> = &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>;\
<a class="l" name="221" href="#221">221</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=lh_first&amp;project=OpenBSD">lh_first</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);                   \
<a class="l" name="222" href="#222">222</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> = &amp;(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=lh_first&amp;project=OpenBSD">lh_first</a>;           \
<a class="l" name="223" href="#223">223</a>} <b>while</b> (0)
<a class="l" name="224" href="#224">224</a>
<a class="l" name="225" href="#225">225</a>#<b>define</b> <a class="xm" name="LIST_REMOVE"/><a href="/s?refs=LIST_REMOVE&amp;project=OpenBSD" class="xm">LIST_REMOVE</a>(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {                    \
<a class="l" name="226" href="#226">226</a>    <b>if</b> ((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a> != <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>)               \
<a class="l" name="227" href="#227">227</a>        (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> =           \
<a class="l" name="228" href="#228">228</a>            (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a>;               \
<a class="l" name="229" href="#229">229</a>    *(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>;           \
<a class="hl" name="230" href="#230">230</a>    <a href="/s?defs=_Q_INVALIDATE&amp;project=OpenBSD">_Q_INVALIDATE</a>((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a>);                \
<a class="l" name="231" href="#231">231</a>    <a href="/s?defs=_Q_INVALIDATE&amp;project=OpenBSD">_Q_INVALIDATE</a>((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>);                \
<a class="l" name="232" href="#232">232</a>} <b>while</b> (0)
<a class="l" name="233" href="#233">233</a>
<a class="l" name="234" href="#234">234</a>#<b>define</b> <a class="xm" name="LIST_REPLACE"/><a href="/s?refs=LIST_REPLACE&amp;project=OpenBSD" class="xm">LIST_REPLACE</a>(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {             \
<a class="l" name="235" href="#235">235</a>    <b>if</b> (((<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>) != <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>) \
<a class="l" name="236" href="#236">236</a>        (<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> =          \
<a class="l" name="237" href="#237">237</a>            &amp;(<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>;             \
<a class="l" name="238" href="#238">238</a>    (<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a>;           \
<a class="l" name="239" href="#239">239</a>    *(<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a> = (<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>);                \
<a class="hl" name="240" href="#240">240</a>    <a href="/s?defs=_Q_INVALIDATE&amp;project=OpenBSD">_Q_INVALIDATE</a>((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_prev&amp;project=OpenBSD">le_prev</a>);                \
<a class="l" name="241" href="#241">241</a>    <a href="/s?defs=_Q_INVALIDATE&amp;project=OpenBSD">_Q_INVALIDATE</a>((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=le_next&amp;project=OpenBSD">le_next</a>);                \
<a class="l" name="242" href="#242">242</a>} <b>while</b> (0)
<a class="l" name="243" href="#243">243</a>
<a class="l" name="244" href="#244">244</a><span class="c">/*
<a class="l" name="245" href="#245">245</a> * Simple queue definitions.
<a class="l" name="246" href="#246">246</a> */</span>
<a class="l" name="247" href="#247">247</a>#<b>define</b> <a class="xm" name="SIMPLEQ_HEAD"/><a href="/s?refs=SIMPLEQ_HEAD&amp;project=OpenBSD" class="xm">SIMPLEQ_HEAD</a>(<a href="/s?defs=name&amp;project=OpenBSD">name</a>, <a href="/s?defs=type&amp;project=OpenBSD">type</a>)                    \
<a class="l" name="248" href="#248">248</a><b>struct</b> <a href="/s?defs=name&amp;project=OpenBSD">name</a> {                               \
<a class="l" name="249" href="#249">249</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> *<a href="/s?defs=sqh_first&amp;project=OpenBSD">sqh_first</a>; <span class="c">/* first element */</span>         \
<a class="hl" name="250" href="#250">250</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> **<a href="/s?defs=sqh_last&amp;project=OpenBSD">sqh_last</a>; <span class="c">/* addr of last next element */</span>     \
<a class="l" name="251" href="#251">251</a>}
<a class="l" name="252" href="#252">252</a>
<a class="l" name="253" href="#253">253</a>#<b>define</b> <a class="xm" name="SIMPLEQ_HEAD_INITIALIZER"/><a href="/s?refs=SIMPLEQ_HEAD_INITIALIZER&amp;project=OpenBSD" class="xm">SIMPLEQ_HEAD_INITIALIZER</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)                  \
<a class="l" name="254" href="#254">254</a>    { <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>, &amp;(<a href="/s?defs=head&amp;project=OpenBSD">head</a>).<a href="/s?defs=sqh_first&amp;project=OpenBSD">sqh_first</a> }
<a class="l" name="255" href="#255">255</a>
<a class="l" name="256" href="#256">256</a>#<b>define</b> <a class="xm" name="SIMPLEQ_ENTRY"/><a href="/s?refs=SIMPLEQ_ENTRY&amp;project=OpenBSD" class="xm">SIMPLEQ_ENTRY</a>(<a href="/s?defs=type&amp;project=OpenBSD">type</a>)                     \
<a class="l" name="257" href="#257">257</a><b>struct</b> {                                \
<a class="l" name="258" href="#258">258</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> *<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a>;  <span class="c">/* next element */</span>          \
<a class="l" name="259" href="#259">259</a>}
<a class="hl" name="260" href="#260">260</a>
<a class="l" name="261" href="#261">261</a><span class="c">/*
<a class="l" name="262" href="#262">262</a> * Simple queue access methods.
<a class="l" name="263" href="#263">263</a> */</span>
<a class="l" name="264" href="#264">264</a>#<b>define</b> <a class="xm" name="SIMPLEQ_FIRST"/><a href="/s?refs=SIMPLEQ_FIRST&amp;project=OpenBSD" class="xm">SIMPLEQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)     ((<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_first&amp;project=OpenBSD">sqh_first</a>)
<a class="l" name="265" href="#265">265</a>#<b>define</b> <a class="xm" name="SIMPLEQ_END"/><a href="/s?refs=SIMPLEQ_END&amp;project=OpenBSD" class="xm">SIMPLEQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)       <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>
<a class="l" name="266" href="#266">266</a>#<b>define</b> <a class="xm" name="SIMPLEQ_EMPTY"/><a href="/s?refs=SIMPLEQ_EMPTY&amp;project=OpenBSD" class="xm">SIMPLEQ_EMPTY</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)     (<a class="d" href="#SIMPLEQ_FIRST">SIMPLEQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) == <a class="d" href="#SIMPLEQ_END">SIMPLEQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>))
<a class="l" name="267" href="#267">267</a>#<b>define</b> <a class="xm" name="SIMPLEQ_NEXT"/><a href="/s?refs=SIMPLEQ_NEXT&amp;project=OpenBSD" class="xm">SIMPLEQ_NEXT</a>(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)    ((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a>)
<a class="l" name="268" href="#268">268</a>
<a class="l" name="269" href="#269">269</a>#<b>define</b> <a class="xm" name="SIMPLEQ_FOREACH"/><a href="/s?refs=SIMPLEQ_FOREACH&amp;project=OpenBSD" class="xm">SIMPLEQ_FOREACH</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)               \
<a class="hl" name="270" href="#270">270</a>    <b>for</b>((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#SIMPLEQ_FIRST">SIMPLEQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                \
<a class="l" name="271" href="#271">271</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) != <a class="d" href="#SIMPLEQ_END">SIMPLEQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                 \
<a class="l" name="272" href="#272">272</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#SIMPLEQ_NEXT">SIMPLEQ_NEXT</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>))
<a class="l" name="273" href="#273">273</a>
<a class="l" name="274" href="#274">274</a>#<b>define</b> <a class="xm" name="SIMPLEQ_FOREACH_SAFE"/><a href="/s?refs=SIMPLEQ_FOREACH_SAFE&amp;project=OpenBSD" class="xm">SIMPLEQ_FOREACH_SAFE</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>, <a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>)            \
<a class="l" name="275" href="#275">275</a>    <b>for</b> ((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#SIMPLEQ_FIRST">SIMPLEQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);               \
<a class="l" name="276" href="#276">276</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) &amp;&amp; ((<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>) = <a class="d" href="#SIMPLEQ_NEXT">SIMPLEQ_NEXT</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>), <span class="n">1</span>);        \
<a class="l" name="277" href="#277">277</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = (<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>))
<a class="l" name="278" href="#278">278</a>
<a class="l" name="279" href="#279">279</a><span class="c">/*
<a class="hl" name="280" href="#280">280</a> * Simple queue functions.
<a class="l" name="281" href="#281">281</a> */</span>
<a class="l" name="282" href="#282">282</a>#<b>define</b> <a class="xm" name="SIMPLEQ_INIT"/><a href="/s?refs=SIMPLEQ_INIT&amp;project=OpenBSD" class="xm">SIMPLEQ_INIT</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) <b>do</b> {                     \
<a class="l" name="283" href="#283">283</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_first&amp;project=OpenBSD">sqh_first</a> = <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>;                   \
<a class="l" name="284" href="#284">284</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_last&amp;project=OpenBSD">sqh_last</a> = &amp;(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_first&amp;project=OpenBSD">sqh_first</a>;              \
<a class="l" name="285" href="#285">285</a>} <b>while</b> (0)
<a class="l" name="286" href="#286">286</a>
<a class="l" name="287" href="#287">287</a>#<b>define</b> <a class="xm" name="SIMPLEQ_INSERT_HEAD"/><a href="/s?refs=SIMPLEQ_INSERT_HEAD&amp;project=OpenBSD" class="xm">SIMPLEQ_INSERT_HEAD</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {          \
<a class="l" name="288" href="#288">288</a>    <b>if</b> (((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a> = (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_first&amp;project=OpenBSD">sqh_first</a>) == <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>)    \
<a class="l" name="289" href="#289">289</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_last&amp;project=OpenBSD">sqh_last</a> = &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a>;      \
<a class="hl" name="290" href="#290">290</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_first&amp;project=OpenBSD">sqh_first</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);                  \
<a class="l" name="291" href="#291">291</a>} <b>while</b> (0)
<a class="l" name="292" href="#292">292</a>
<a class="l" name="293" href="#293">293</a>#<b>define</b> <a class="xm" name="SIMPLEQ_INSERT_TAIL"/><a href="/s?refs=SIMPLEQ_INSERT_TAIL&amp;project=OpenBSD" class="xm">SIMPLEQ_INSERT_TAIL</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {          \
<a class="l" name="294" href="#294">294</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a> = <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>;                   \
<a class="l" name="295" href="#295">295</a>    *(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_last&amp;project=OpenBSD">sqh_last</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);                  \
<a class="l" name="296" href="#296">296</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_last&amp;project=OpenBSD">sqh_last</a> = &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a>;          \
<a class="l" name="297" href="#297">297</a>} <b>while</b> (0)
<a class="l" name="298" href="#298">298</a>
<a class="l" name="299" href="#299">299</a>#<b>define</b> <a class="xm" name="SIMPLEQ_INSERT_AFTER"/><a href="/s?refs=SIMPLEQ_INSERT_AFTER&amp;project=OpenBSD" class="xm">SIMPLEQ_INSERT_AFTER</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {        \
<a class="hl" name="300" href="#300">300</a>    <b>if</b> (((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a> = (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a>) == <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>)\
<a class="l" name="301" href="#301">301</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_last&amp;project=OpenBSD">sqh_last</a> = &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a>;      \
<a class="l" name="302" href="#302">302</a>    (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);              \
<a class="l" name="303" href="#303">303</a>} <b>while</b> (0)
<a class="l" name="304" href="#304">304</a>
<a class="l" name="305" href="#305">305</a>#<b>define</b> <a class="xm" name="SIMPLEQ_REMOVE_HEAD"/><a href="/s?refs=SIMPLEQ_REMOVE_HEAD&amp;project=OpenBSD" class="xm">SIMPLEQ_REMOVE_HEAD</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {           \
<a class="l" name="306" href="#306">306</a>    <b>if</b> (((<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_first&amp;project=OpenBSD">sqh_first</a> = (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_first&amp;project=OpenBSD">sqh_first</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a>) == <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>) \
<a class="l" name="307" href="#307">307</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_last&amp;project=OpenBSD">sqh_last</a> = &amp;(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_first&amp;project=OpenBSD">sqh_first</a>;          \
<a class="l" name="308" href="#308">308</a>} <b>while</b> (0)
<a class="l" name="309" href="#309">309</a>
<a class="hl" name="310" href="#310">310</a>#<b>define</b> <a class="xm" name="SIMPLEQ_REMOVE_AFTER"/><a href="/s?refs=SIMPLEQ_REMOVE_AFTER&amp;project=OpenBSD" class="xm">SIMPLEQ_REMOVE_AFTER</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {         \
<a class="l" name="311" href="#311">311</a>    <b>if</b> (((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a>) \
<a class="l" name="312" href="#312">312</a>        == <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>)                            \
<a class="l" name="313" href="#313">313</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqh_last&amp;project=OpenBSD">sqh_last</a> = &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqe_next&amp;project=OpenBSD">sqe_next</a>;      \
<a class="l" name="314" href="#314">314</a>} <b>while</b> (0)
<a class="l" name="315" href="#315">315</a>
<a class="l" name="316" href="#316">316</a>#<b>define</b> <a class="xm" name="SIMPLEQ_CONCAT"/><a href="/s?refs=SIMPLEQ_CONCAT&amp;project=OpenBSD" class="xm">SIMPLEQ_CONCAT</a>(<a href="/s?defs=head1&amp;project=OpenBSD">head1</a>, <a href="/s?defs=head2&amp;project=OpenBSD">head2</a>) <b>do</b> {               \
<a class="l" name="317" href="#317">317</a>    <b>if</b> (!<a class="d" href="#SIMPLEQ_EMPTY">SIMPLEQ_EMPTY</a>((<a href="/s?defs=head2&amp;project=OpenBSD">head2</a>))) {                  \
<a class="l" name="318" href="#318">318</a>        *(<a href="/s?defs=head1&amp;project=OpenBSD">head1</a>)-&gt;<a href="/s?defs=sqh_last&amp;project=OpenBSD">sqh_last</a> = (<a href="/s?defs=head2&amp;project=OpenBSD">head2</a>)-&gt;<a href="/s?defs=sqh_first&amp;project=OpenBSD">sqh_first</a>;        \
<a class="l" name="319" href="#319">319</a>        (<a href="/s?defs=head1&amp;project=OpenBSD">head1</a>)-&gt;<a href="/s?defs=sqh_last&amp;project=OpenBSD">sqh_last</a> = (<a href="/s?defs=head2&amp;project=OpenBSD">head2</a>)-&gt;<a href="/s?defs=sqh_last&amp;project=OpenBSD">sqh_last</a>;          \
<a class="hl" name="320" href="#320">320</a>        <a class="d" href="#SIMPLEQ_INIT">SIMPLEQ_INIT</a>((<a href="/s?defs=head2&amp;project=OpenBSD">head2</a>));                  \
<a class="l" name="321" href="#321">321</a>    }                               \
<a class="l" name="322" href="#322">322</a>} <b>while</b> (0)
<a class="l" name="323" href="#323">323</a>
<a class="l" name="324" href="#324">324</a><span class="c">/*
<a class="l" name="325" href="#325">325</a> * XOR Simple queue definitions.
<a class="l" name="326" href="#326">326</a> */</span>
<a class="l" name="327" href="#327">327</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_HEAD"/><a href="/s?refs=XSIMPLEQ_HEAD&amp;project=OpenBSD" class="xm">XSIMPLEQ_HEAD</a>(<a href="/s?defs=name&amp;project=OpenBSD">name</a>, <a href="/s?defs=type&amp;project=OpenBSD">type</a>)                   \
<a class="l" name="328" href="#328">328</a><b>struct</b> <a href="/s?defs=name&amp;project=OpenBSD">name</a> {                               \
<a class="l" name="329" href="#329">329</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> *<a href="/s?defs=sqx_first&amp;project=OpenBSD">sqx_first</a>; <span class="c">/* first element */</span>         \
<a class="hl" name="330" href="#330">330</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> **<a href="/s?defs=sqx_last&amp;project=OpenBSD">sqx_last</a>; <span class="c">/* addr of last next element */</span>     \
<a class="l" name="331" href="#331">331</a>    <b>unsigned</b> <b>long</b> <a href="/s?defs=sqx_cookie&amp;project=OpenBSD">sqx_cookie</a>;                   \
<a class="l" name="332" href="#332">332</a>}
<a class="l" name="333" href="#333">333</a>
<a class="l" name="334" href="#334">334</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_ENTRY"/><a href="/s?refs=XSIMPLEQ_ENTRY&amp;project=OpenBSD" class="xm">XSIMPLEQ_ENTRY</a>(<a href="/s?defs=type&amp;project=OpenBSD">type</a>)                        \
<a class="l" name="335" href="#335">335</a><b>struct</b> {                                \
<a class="l" name="336" href="#336">336</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> *<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a>;  <span class="c">/* next element */</span>          \
<a class="l" name="337" href="#337">337</a>}
<a class="l" name="338" href="#338">338</a>
<a class="l" name="339" href="#339">339</a><span class="c">/*
<a class="hl" name="340" href="#340">340</a> * XOR Simple queue access methods.
<a class="l" name="341" href="#341">341</a> */</span>
<a class="l" name="342" href="#342">342</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_XOR"/><a href="/s?refs=XSIMPLEQ_XOR&amp;project=OpenBSD" class="xm">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=ptr&amp;project=OpenBSD">ptr</a>)     ((<a href="/s?defs=__typeof&amp;project=OpenBSD">__typeof</a>(<a href="/s?defs=ptr&amp;project=OpenBSD">ptr</a>))((<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_cookie&amp;project=OpenBSD">sqx_cookie</a> ^ \
<a class="l" name="343" href="#343">343</a>                    (<b>unsigned</b> <b>long</b>)(<a href="/s?defs=ptr&amp;project=OpenBSD">ptr</a>)))
<a class="l" name="344" href="#344">344</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_FIRST"/><a href="/s?refs=XSIMPLEQ_FIRST&amp;project=OpenBSD" class="xm">XSIMPLEQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)        <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, ((<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_first&amp;project=OpenBSD">sqx_first</a>))
<a class="l" name="345" href="#345">345</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_END"/><a href="/s?refs=XSIMPLEQ_END&amp;project=OpenBSD" class="xm">XSIMPLEQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)      <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>
<a class="l" name="346" href="#346">346</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_EMPTY"/><a href="/s?refs=XSIMPLEQ_EMPTY&amp;project=OpenBSD" class="xm">XSIMPLEQ_EMPTY</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)        (<a class="d" href="#XSIMPLEQ_FIRST">XSIMPLEQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) == <a class="d" href="#XSIMPLEQ_END">XSIMPLEQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>))
<a class="l" name="347" href="#347">347</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_NEXT"/><a href="/s?refs=XSIMPLEQ_NEXT&amp;project=OpenBSD" class="xm">XSIMPLEQ_NEXT</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)    <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, ((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a>))
<a class="l" name="348" href="#348">348</a>
<a class="l" name="349" href="#349">349</a>
<a class="hl" name="350" href="#350">350</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_FOREACH"/><a href="/s?refs=XSIMPLEQ_FOREACH&amp;project=OpenBSD" class="xm">XSIMPLEQ_FOREACH</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)              \
<a class="l" name="351" href="#351">351</a>    <b>for</b> ((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#XSIMPLEQ_FIRST">XSIMPLEQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);              \
<a class="l" name="352" href="#352">352</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) != <a class="d" href="#XSIMPLEQ_END">XSIMPLEQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                \
<a class="l" name="353" href="#353">353</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#XSIMPLEQ_NEXT">XSIMPLEQ_NEXT</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>))
<a class="l" name="354" href="#354">354</a>
<a class="l" name="355" href="#355">355</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_FOREACH_SAFE"/><a href="/s?refs=XSIMPLEQ_FOREACH_SAFE&amp;project=OpenBSD" class="xm">XSIMPLEQ_FOREACH_SAFE</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>, <a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>)           \
<a class="l" name="356" href="#356">356</a>    <b>for</b> ((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#XSIMPLEQ_FIRST">XSIMPLEQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);              \
<a class="l" name="357" href="#357">357</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) &amp;&amp; ((<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>) = <a class="d" href="#XSIMPLEQ_NEXT">XSIMPLEQ_NEXT</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>), <span class="n">1</span>); \
<a class="l" name="358" href="#358">358</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = (<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>))
<a class="l" name="359" href="#359">359</a>
<a class="hl" name="360" href="#360">360</a><span class="c">/*
<a class="l" name="361" href="#361">361</a> * XOR Simple queue functions.
<a class="l" name="362" href="#362">362</a> */</span>
<a class="l" name="363" href="#363">363</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_INIT"/><a href="/s?refs=XSIMPLEQ_INIT&amp;project=OpenBSD" class="xm">XSIMPLEQ_INIT</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) <b>do</b> {                    \
<a class="l" name="364" href="#364">364</a>    <a href="/s?defs=arc4random_buf&amp;project=OpenBSD">arc4random_buf</a>(&amp;(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_cookie&amp;project=OpenBSD">sqx_cookie</a>, <b>sizeof</b>((<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_cookie&amp;project=OpenBSD">sqx_cookie</a>)); \
<a class="l" name="365" href="#365">365</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_first&amp;project=OpenBSD">sqx_first</a> = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>);           \
<a class="l" name="366" href="#366">366</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_last&amp;project=OpenBSD">sqx_last</a> = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, &amp;(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_first&amp;project=OpenBSD">sqx_first</a>);  \
<a class="l" name="367" href="#367">367</a>} <b>while</b> (0)
<a class="l" name="368" href="#368">368</a>
<a class="l" name="369" href="#369">369</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_INSERT_HEAD"/><a href="/s?refs=XSIMPLEQ_INSERT_HEAD&amp;project=OpenBSD" class="xm">XSIMPLEQ_INSERT_HEAD</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {         \
<a class="hl" name="370" href="#370">370</a>    <b>if</b> (((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a> = (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_first&amp;project=OpenBSD">sqx_first</a>) ==      \
<a class="l" name="371" href="#371">371</a>        <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>))                   \
<a class="l" name="372" href="#372">372</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_last&amp;project=OpenBSD">sqx_last</a> = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a>); \
<a class="l" name="373" href="#373">373</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_first&amp;project=OpenBSD">sqx_first</a> = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>));          \
<a class="l" name="374" href="#374">374</a>} <b>while</b> (0)
<a class="l" name="375" href="#375">375</a>
<a class="l" name="376" href="#376">376</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_INSERT_TAIL"/><a href="/s?refs=XSIMPLEQ_INSERT_TAIL&amp;project=OpenBSD" class="xm">XSIMPLEQ_INSERT_TAIL</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {         \
<a class="l" name="377" href="#377">377</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a> = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>);       \
<a class="l" name="378" href="#378">378</a>    *(<a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_last&amp;project=OpenBSD">sqx_last</a>)) = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)); \
<a class="l" name="379" href="#379">379</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_last&amp;project=OpenBSD">sqx_last</a> = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a>);  \
<a class="hl" name="380" href="#380">380</a>} <b>while</b> (0)
<a class="l" name="381" href="#381">381</a>
<a class="l" name="382" href="#382">382</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_INSERT_AFTER"/><a href="/s?refs=XSIMPLEQ_INSERT_AFTER&amp;project=OpenBSD" class="xm">XSIMPLEQ_INSERT_AFTER</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {       \
<a class="l" name="383" href="#383">383</a>    <b>if</b> (((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a> = (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a>) ==  \
<a class="l" name="384" href="#384">384</a>        <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>))                   \
<a class="l" name="385" href="#385">385</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_last&amp;project=OpenBSD">sqx_last</a> = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a>); \
<a class="l" name="386" href="#386">386</a>    (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a> = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>));      \
<a class="l" name="387" href="#387">387</a>} <b>while</b> (0)
<a class="l" name="388" href="#388">388</a>
<a class="l" name="389" href="#389">389</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_REMOVE_HEAD"/><a href="/s?refs=XSIMPLEQ_REMOVE_HEAD&amp;project=OpenBSD" class="xm">XSIMPLEQ_REMOVE_HEAD</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {              \
<a class="hl" name="390" href="#390">390</a>    <b>if</b> (((<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_first&amp;project=OpenBSD">sqx_first</a> = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>,         \
<a class="l" name="391" href="#391">391</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_first&amp;project=OpenBSD">sqx_first</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a>) == <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>)) \
<a class="l" name="392" href="#392">392</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_last&amp;project=OpenBSD">sqx_last</a> = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, &amp;(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_first&amp;project=OpenBSD">sqx_first</a>); \
<a class="l" name="393" href="#393">393</a>} <b>while</b> (0)
<a class="l" name="394" href="#394">394</a>
<a class="l" name="395" href="#395">395</a>#<b>define</b> <a class="xm" name="XSIMPLEQ_REMOVE_AFTER"/><a href="/s?refs=XSIMPLEQ_REMOVE_AFTER&amp;project=OpenBSD" class="xm">XSIMPLEQ_REMOVE_AFTER</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {            \
<a class="l" name="396" href="#396">396</a>    <b>if</b> (((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a> = <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>,         \
<a class="l" name="397" href="#397">397</a>        (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a>)         \
<a class="l" name="398" href="#398">398</a>        == <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>))                \
<a class="l" name="399" href="#399">399</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=sqx_last&amp;project=OpenBSD">sqx_last</a> =                  \
<a class="hl" name="400" href="#400">400</a>            <a class="d" href="#XSIMPLEQ_XOR">XSIMPLEQ_XOR</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=sqx_next&amp;project=OpenBSD">sqx_next</a>);     \
<a class="l" name="401" href="#401">401</a>} <b>while</b> (0)
<a class="l" name="402" href="#402">402</a>
<a class="l" name="403" href="#403">403</a>
<a class="l" name="404" href="#404">404</a><span class="c">/*
<a class="l" name="405" href="#405">405</a> * Tail queue definitions.
<a class="l" name="406" href="#406">406</a> */</span>
<a class="l" name="407" href="#407">407</a>#<b>define</b> <a class="xm" name="TAILQ_HEAD"/><a href="/s?refs=TAILQ_HEAD&amp;project=OpenBSD" class="xm">TAILQ_HEAD</a>(<a href="/s?defs=name&amp;project=OpenBSD">name</a>, <a href="/s?defs=type&amp;project=OpenBSD">type</a>)                      \
<a class="l" name="408" href="#408">408</a><b>struct</b> <a href="/s?defs=name&amp;project=OpenBSD">name</a> {                               \
<a class="l" name="409" href="#409">409</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> *<a href="/s?defs=tqh_first&amp;project=OpenBSD">tqh_first</a>; <span class="c">/* first element */</span>         \
<a class="hl" name="410" href="#410">410</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> **<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a>; <span class="c">/* addr of last next element */</span>     \
<a class="l" name="411" href="#411">411</a>}
<a class="l" name="412" href="#412">412</a>
<a class="l" name="413" href="#413">413</a>#<b>define</b> <a class="xm" name="TAILQ_HEAD_INITIALIZER"/><a href="/s?refs=TAILQ_HEAD_INITIALIZER&amp;project=OpenBSD" class="xm">TAILQ_HEAD_INITIALIZER</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)                    \
<a class="l" name="414" href="#414">414</a>    { <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>, &amp;(<a href="/s?defs=head&amp;project=OpenBSD">head</a>).<a href="/s?defs=tqh_first&amp;project=OpenBSD">tqh_first</a> }
<a class="l" name="415" href="#415">415</a>
<a class="l" name="416" href="#416">416</a>#<b>define</b> <a class="xm" name="TAILQ_ENTRY"/><a href="/s?refs=TAILQ_ENTRY&amp;project=OpenBSD" class="xm">TAILQ_ENTRY</a>(<a href="/s?defs=type&amp;project=OpenBSD">type</a>)                       \
<a class="l" name="417" href="#417">417</a><b>struct</b> {                                \
<a class="l" name="418" href="#418">418</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> *<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>;  <span class="c">/* next element */</span>          \
<a class="l" name="419" href="#419">419</a>    <b>struct</b> <a href="/s?defs=type&amp;project=OpenBSD">type</a> **<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a>; <span class="c">/* address of previous next element */</span>  \
<a class="hl" name="420" href="#420">420</a>}
<a class="l" name="421" href="#421">421</a>
<a class="l" name="422" href="#422">422</a><span class="c">/*
<a class="l" name="423" href="#423">423</a> * Tail queue access methods.
<a class="l" name="424" href="#424">424</a> */</span>
<a class="l" name="425" href="#425">425</a>#<b>define</b> <a class="xm" name="TAILQ_FIRST"/><a href="/s?refs=TAILQ_FIRST&amp;project=OpenBSD" class="xm">TAILQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)       ((<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_first&amp;project=OpenBSD">tqh_first</a>)
<a class="l" name="426" href="#426">426</a>#<b>define</b> <a class="xm" name="TAILQ_END"/><a href="/s?refs=TAILQ_END&amp;project=OpenBSD" class="xm">TAILQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)         <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>
<a class="l" name="427" href="#427">427</a>#<b>define</b> <a class="xm" name="TAILQ_NEXT"/><a href="/s?refs=TAILQ_NEXT&amp;project=OpenBSD" class="xm">TAILQ_NEXT</a>(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)      ((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>)
<a class="l" name="428" href="#428">428</a>#<b>define</b> <a class="xm" name="TAILQ_LAST"/><a href="/s?refs=TAILQ_LAST&amp;project=OpenBSD" class="xm">TAILQ_LAST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=headname&amp;project=OpenBSD">headname</a>)                  \
<a class="l" name="429" href="#429">429</a>    (*(((<b>struct</b> <a href="/s?defs=headname&amp;project=OpenBSD">headname</a> *)((<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a>))-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a>))
<a class="hl" name="430" href="#430">430</a><span class="c">/* XXX */</span>
<a class="l" name="431" href="#431">431</a>#<b>define</b> <a class="xm" name="TAILQ_PREV"/><a href="/s?refs=TAILQ_PREV&amp;project=OpenBSD" class="xm">TAILQ_PREV</a>(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=headname&amp;project=OpenBSD">headname</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)                \
<a class="l" name="432" href="#432">432</a>    (*(((<b>struct</b> <a href="/s?defs=headname&amp;project=OpenBSD">headname</a> *)((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a>))-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a>))
<a class="l" name="433" href="#433">433</a>#<b>define</b> <a class="xm" name="TAILQ_EMPTY"/><a href="/s?refs=TAILQ_EMPTY&amp;project=OpenBSD" class="xm">TAILQ_EMPTY</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)                       \
<a class="l" name="434" href="#434">434</a>    (<a class="d" href="#TAILQ_FIRST">TAILQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) == <a class="d" href="#TAILQ_END">TAILQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>))
<a class="l" name="435" href="#435">435</a>
<a class="l" name="436" href="#436">436</a>#<b>define</b> <a class="xm" name="TAILQ_FOREACH"/><a href="/s?refs=TAILQ_FOREACH&amp;project=OpenBSD" class="xm">TAILQ_FOREACH</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)                 \
<a class="l" name="437" href="#437">437</a>    <b>for</b>((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#TAILQ_FIRST">TAILQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                  \
<a class="l" name="438" href="#438">438</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) != <a class="d" href="#TAILQ_END">TAILQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                   \
<a class="l" name="439" href="#439">439</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#TAILQ_NEXT">TAILQ_NEXT</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>))
<a class="hl" name="440" href="#440">440</a>
<a class="l" name="441" href="#441">441</a>#<b>define</b> <a class="xm" name="TAILQ_FOREACH_SAFE"/><a href="/s?refs=TAILQ_FOREACH_SAFE&amp;project=OpenBSD" class="xm">TAILQ_FOREACH_SAFE</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>, <a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>)          \
<a class="l" name="442" href="#442">442</a>    <b>for</b> ((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#TAILQ_FIRST">TAILQ_FIRST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                 \
<a class="l" name="443" href="#443">443</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) != <a class="d" href="#TAILQ_END">TAILQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) &amp;&amp;                 \
<a class="l" name="444" href="#444">444</a>        ((<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>) = <a class="d" href="#TAILQ_NEXT">TAILQ_NEXT</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>), <span class="n">1</span>);           \
<a class="l" name="445" href="#445">445</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = (<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>))
<a class="l" name="446" href="#446">446</a>
<a class="l" name="447" href="#447">447</a>
<a class="l" name="448" href="#448">448</a>#<b>define</b> <a class="xm" name="TAILQ_FOREACH_REVERSE"/><a href="/s?refs=TAILQ_FOREACH_REVERSE&amp;project=OpenBSD" class="xm">TAILQ_FOREACH_REVERSE</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=headname&amp;project=OpenBSD">headname</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>)       \
<a class="l" name="449" href="#449">449</a>    <b>for</b>((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#TAILQ_LAST">TAILQ_LAST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=headname&amp;project=OpenBSD">headname</a>);             \
<a class="hl" name="450" href="#450">450</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) != <a class="d" href="#TAILQ_END">TAILQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>);                   \
<a class="l" name="451" href="#451">451</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#TAILQ_PREV">TAILQ_PREV</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=headname&amp;project=OpenBSD">headname</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>))
<a class="l" name="452" href="#452">452</a>
<a class="l" name="453" href="#453">453</a>#<b>define</b> <a class="xm" name="TAILQ_FOREACH_REVERSE_SAFE"/><a href="/s?refs=TAILQ_FOREACH_REVERSE_SAFE&amp;project=OpenBSD" class="xm">TAILQ_FOREACH_REVERSE_SAFE</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=headname&amp;project=OpenBSD">headname</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>, <a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>)    \
<a class="l" name="454" href="#454">454</a>    <b>for</b> ((<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = <a class="d" href="#TAILQ_LAST">TAILQ_LAST</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=headname&amp;project=OpenBSD">headname</a>);            \
<a class="l" name="455" href="#455">455</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) != <a class="d" href="#TAILQ_END">TAILQ_END</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) &amp;&amp;                 \
<a class="l" name="456" href="#456">456</a>        ((<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>) = <a class="d" href="#TAILQ_PREV">TAILQ_PREV</a>(<a href="/s?defs=var&amp;project=OpenBSD">var</a>, <a href="/s?defs=headname&amp;project=OpenBSD">headname</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>), <span class="n">1</span>);     \
<a class="l" name="457" href="#457">457</a>        (<a href="/s?defs=var&amp;project=OpenBSD">var</a>) = (<a href="/s?defs=tvar&amp;project=OpenBSD">tvar</a>))
<a class="l" name="458" href="#458">458</a>
<a class="l" name="459" href="#459">459</a><span class="c">/*
<a class="hl" name="460" href="#460">460</a> * Tail queue functions.
<a class="l" name="461" href="#461">461</a> */</span>
<a class="l" name="462" href="#462">462</a>#<b>define</b> <a class="xm" name="TAILQ_INIT"/><a href="/s?refs=TAILQ_INIT&amp;project=OpenBSD" class="xm">TAILQ_INIT</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>) <b>do</b> {                       \
<a class="l" name="463" href="#463">463</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_first&amp;project=OpenBSD">tqh_first</a> = <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>;                   \
<a class="l" name="464" href="#464">464</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a> = &amp;(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_first&amp;project=OpenBSD">tqh_first</a>;              \
<a class="l" name="465" href="#465">465</a>} <b>while</b> (0)
<a class="l" name="466" href="#466">466</a>
<a class="l" name="467" href="#467">467</a>#<b>define</b> <a class="xm" name="TAILQ_INSERT_HEAD"/><a href="/s?refs=TAILQ_INSERT_HEAD&amp;project=OpenBSD" class="xm">TAILQ_INSERT_HEAD</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {            \
<a class="l" name="468" href="#468">468</a>    <b>if</b> (((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a> = (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_first&amp;project=OpenBSD">tqh_first</a>) != <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>)    \
<a class="l" name="469" href="#469">469</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_first&amp;project=OpenBSD">tqh_first</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> =         \
<a class="hl" name="470" href="#470">470</a>            &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>;             \
<a class="l" name="471" href="#471">471</a>    <b>else</b>                                \
<a class="l" name="472" href="#472">472</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a> = &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>;      \
<a class="l" name="473" href="#473">473</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_first&amp;project=OpenBSD">tqh_first</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);                  \
<a class="l" name="474" href="#474">474</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> = &amp;(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_first&amp;project=OpenBSD">tqh_first</a>;         \
<a class="l" name="475" href="#475">475</a>} <b>while</b> (0)
<a class="l" name="476" href="#476">476</a>
<a class="l" name="477" href="#477">477</a>#<b>define</b> <a class="xm" name="TAILQ_INSERT_TAIL"/><a href="/s?refs=TAILQ_INSERT_TAIL&amp;project=OpenBSD" class="xm">TAILQ_INSERT_TAIL</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {            \
<a class="l" name="478" href="#478">478</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a> = <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>;                   \
<a class="l" name="479" href="#479">479</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> = (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a>;           \
<a class="hl" name="480" href="#480">480</a>    *(<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);                  \
<a class="l" name="481" href="#481">481</a>    (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a> = &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>;          \
<a class="l" name="482" href="#482">482</a>} <b>while</b> (0)
<a class="l" name="483" href="#483">483</a>
<a class="l" name="484" href="#484">484</a>#<b>define</b> <a class="xm" name="TAILQ_INSERT_AFTER"/><a href="/s?refs=TAILQ_INSERT_AFTER&amp;project=OpenBSD" class="xm">TAILQ_INSERT_AFTER</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {      \
<a class="l" name="485" href="#485">485</a>    <b>if</b> (((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a> = (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>) != <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>)\
<a class="l" name="486" href="#486">486</a>        (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> =         \
<a class="l" name="487" href="#487">487</a>            &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>;             \
<a class="l" name="488" href="#488">488</a>    <b>else</b>                                \
<a class="l" name="489" href="#489">489</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a> = &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>;      \
<a class="hl" name="490" href="#490">490</a>    (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);              \
<a class="l" name="491" href="#491">491</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> = &amp;(<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>;     \
<a class="l" name="492" href="#492">492</a>} <b>while</b> (0)
<a class="l" name="493" href="#493">493</a>
<a class="l" name="494" href="#494">494</a>#<b>define</b> <a class="xm" name="TAILQ_INSERT_BEFORE"/><a href="/s?refs=TAILQ_INSERT_BEFORE&amp;project=OpenBSD" class="xm">TAILQ_INSERT_BEFORE</a>(<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {           \
<a class="l" name="495" href="#495">495</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> = (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a>;      \
<a class="l" name="496" href="#496">496</a>    (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a> = (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>);              \
<a class="l" name="497" href="#497">497</a>    *(<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>);             \
<a class="l" name="498" href="#498">498</a>    (<a href="/s?defs=listelm&amp;project=OpenBSD">listelm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> = &amp;(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>;     \
<a class="l" name="499" href="#499">499</a>} <b>while</b> (0)
<a class="hl" name="500" href="#500">500</a>
<a class="l" name="501" href="#501">501</a>#<b>define</b> <a class="xm" name="TAILQ_REMOVE"/><a href="/s?refs=TAILQ_REMOVE&amp;project=OpenBSD" class="xm">TAILQ_REMOVE</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {             \
<a class="l" name="502" href="#502">502</a>    <b>if</b> (((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>) != <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>)                \
<a class="l" name="503" href="#503">503</a>        (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> =         \
<a class="l" name="504" href="#504">504</a>            (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a>;              \
<a class="l" name="505" href="#505">505</a>    <b>else</b>                                \
<a class="l" name="506" href="#506">506</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a>;       \
<a class="l" name="507" href="#507">507</a>    *(<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>;         \
<a class="l" name="508" href="#508">508</a>    <a href="/s?defs=_Q_INVALIDATE&amp;project=OpenBSD">_Q_INVALIDATE</a>((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a>);               \
<a class="l" name="509" href="#509">509</a>    <a href="/s?defs=_Q_INVALIDATE&amp;project=OpenBSD">_Q_INVALIDATE</a>((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>);               \
<a class="hl" name="510" href="#510">510</a>} <b>while</b> (0)
<a class="l" name="511" href="#511">511</a>
<a class="l" name="512" href="#512">512</a>#<b>define</b> <a class="xm" name="TAILQ_REPLACE"/><a href="/s?refs=TAILQ_REPLACE&amp;project=OpenBSD" class="xm">TAILQ_REPLACE</a>(<a href="/s?defs=head&amp;project=OpenBSD">head</a>, <a href="/s?defs=elm&amp;project=OpenBSD">elm</a>, <a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {          \
<a class="l" name="513" href="#513">513</a>    <b>if</b> (((<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>) != <a href="/s?defs=NULL&amp;project=OpenBSD">NULL</a>)   \
<a class="l" name="514" href="#514">514</a>        (<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> =        \
<a class="l" name="515" href="#515">515</a>            &amp;(<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>;                \
<a class="l" name="516" href="#516">516</a>    <b>else</b>                                \
<a class="l" name="517" href="#517">517</a>        (<a href="/s?defs=head&amp;project=OpenBSD">head</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a> = &amp;(<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>;     \
<a class="l" name="518" href="#518">518</a>    (<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> = (<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a>;         \
<a class="l" name="519" href="#519">519</a>    *(<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> = (<a href="/s?defs=elm2&amp;project=OpenBSD">elm2</a>);               \
<a class="hl" name="520" href="#520">520</a>    <a href="/s?defs=_Q_INVALIDATE&amp;project=OpenBSD">_Q_INVALIDATE</a>((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a>);               \
<a class="l" name="521" href="#521">521</a>    <a href="/s?defs=_Q_INVALIDATE&amp;project=OpenBSD">_Q_INVALIDATE</a>((<a href="/s?defs=elm&amp;project=OpenBSD">elm</a>)-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_next&amp;project=OpenBSD">tqe_next</a>);               \
<a class="l" name="522" href="#522">522</a>} <b>while</b> (0)
<a class="l" name="523" href="#523">523</a>
<a class="l" name="524" href="#524">524</a>#<b>define</b> <a class="xm" name="TAILQ_CONCAT"/><a href="/s?refs=TAILQ_CONCAT&amp;project=OpenBSD" class="xm">TAILQ_CONCAT</a>(<a href="/s?defs=head1&amp;project=OpenBSD">head1</a>, <a href="/s?defs=head2&amp;project=OpenBSD">head2</a>, <a href="/s?defs=field&amp;project=OpenBSD">field</a>) <b>do</b> {              \
<a class="l" name="525" href="#525">525</a>    <b>if</b> (!<a class="d" href="#TAILQ_EMPTY">TAILQ_EMPTY</a>(<a href="/s?defs=head2&amp;project=OpenBSD">head2</a>)) {                  \
<a class="l" name="526" href="#526">526</a>        *(<a href="/s?defs=head1&amp;project=OpenBSD">head1</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a> = (<a href="/s?defs=head2&amp;project=OpenBSD">head2</a>)-&gt;<a href="/s?defs=tqh_first&amp;project=OpenBSD">tqh_first</a>;        \
<a class="l" name="527" href="#527">527</a>        (<a href="/s?defs=head2&amp;project=OpenBSD">head2</a>)-&gt;<a href="/s?defs=tqh_first&amp;project=OpenBSD">tqh_first</a>-&gt;<a href="/s?defs=field&amp;project=OpenBSD">field</a>.<a href="/s?defs=tqe_prev&amp;project=OpenBSD">tqe_prev</a> = (<a href="/s?defs=head1&amp;project=OpenBSD">head1</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a>; \
<a class="l" name="528" href="#528">528</a>        (<a href="/s?defs=head1&amp;project=OpenBSD">head1</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a> = (<a href="/s?defs=head2&amp;project=OpenBSD">head2</a>)-&gt;<a href="/s?defs=tqh_last&amp;project=OpenBSD">tqh_last</a>;          \
<a class="l" name="529" href="#529">529</a>        <a class="d" href="#TAILQ_INIT">TAILQ_INIT</a>((<a href="/s?defs=head2&amp;project=OpenBSD">head2</a>));                    \
<a class="hl" name="530" href="#530">530</a>    }                               \
<a class="l" name="531" href="#531">531</a>} <b>while</b> (0)
<a class="l" name="532" href="#532">532</a>
<a class="l" name="533" href="#533">533</a>#<b>endif</b>  <span class="c">/* !_SYS_QUEUE_H_ */</span>
<a class="l" name="534" href="#534">534</a></pre>
</div>
    <div id="footer">
<p><a href="http://www.opensolaris.org/os/project/opengrok/"
 title="Served by OpenGrok"><span id="fti"></span></a></p>
<div><img src="//mc.yandex.ru/watch/21237232" style="position:absolute; left:-9999px;" alt="" /></div>
<p>Indexes created Mon Mar 14 03:56:27 PDT 2016</p></div></div>
</div>
</body>
</html>

