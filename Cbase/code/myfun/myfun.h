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

#define ADDINT addInt
#define ADDFLOAT addFloat
#define ADDLONG addLong
#define ADDSHORT addShort
#define ADDDOUBLE addDouble

#define SUBINT subInt
#define SUBFLOAT subFloat
#define SUBLONG subLong
#define SUBSHORT subShort
#define SUBDOUBLE subDouble

#define MULTINT multipleInt
#define MULTFLOAT multipleFloat
#define MULTLONG multipleLong
#define MULTSHORT multipleShort
#define MULTDOUBLE multipleDouble

#define DIVINT divisionInt
#define DIVFLOAT divisionFloat
#define DIVLONG divisionLong
#define DIVSHORT divisionshort
#define DIVDOUBLE divisionDouble


void simpleArithmetic(void *a,void *b,void *res,void (*pfun)(void *,void *,void *));

void addInt(int *a,int *b,int *sum);
void addFloat(float *a,float *b,float *sum);
void addShort(short *a,short *b,short *sum);
void addLong(long *a,long *b,long *sum);
 void addDouble(double *a,double *b,double *sum);
//减法
 void subInt(int *a,int *b,int *res);
 void subFloat(float *a,float *b,float *res);
 void subShort(short *a,short *b,short *res);
 void subLong(long *a,long *b,long *res);
 void subDouble(double *a,double *b,double *res);
//乘法
 void multipleInt(int *a,int *b,int *res);
 void multipleFloat(float *a,float *b,float *res);
 void multipleShort(short *a,short *b,short *res);
 void multipleLong(long *a,long *b,long *res);
 void multipleDouble(double *a,double *b,double *res);
//除法
 void divisionInt(int *a,int *b,int *res);
 void divisionFloat(float *a,float *b,float *res);
 void divisionShort(short *a,short *b,short *res);
 void divisionLong(long *a,long *b,long *res);
 void divisionDouble(double *a,double *b,double *res);
//取模
 void modeInt(int *a,int *b,int *res);
 void modeShort(short *a,short *b,short *res);
 void modeLong(long *a,long *b,long *res);

#endif