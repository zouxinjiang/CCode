/**
*  	author:zouxinjiang
*	date:2017-08-13
*	
*	description:  我的加减乘除函数库
*/
#ifndef MYFUN
#define MYFUN

#include <stdio.h>
#include <stdlib.h>

#define ADDINT 0
#define ADDFLOAT 1
#define ADDLONG 2
#define ADDSHORT 3
#define ADDDOUBLE 4

#define SUBINT 5
#define SUBFLOAT 6
#define SUBLONG 7
#define SUBSHORT 8
#define SUBDOUBLE 9

#define MULTINT 10
#define MULTFLOAT 11
#define MULTLONG 12
#define MULTSHORT 13
#define MULTDOUBLE 14

#define DIVINT 15
#define DIVFLOAT 16
#define DIVLONG 17
#define DIVSHORT 18
#define DIVDOUBLE 19

#define MODEINT 20
#define MODELONG 21
#define MODESHORT 22

void simpleArithmetic(void *a,void *b,void *res,void (*pfun)(void *,void *,void *));
void innerSimpleArithmetic(void *a,void *b,void *res,int type);

#endif