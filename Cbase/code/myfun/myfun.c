#include "myfun.h"

static void addInt(int *a,int *b,int *sum)
{
	*sum = (*a)+(*b);
	return;
}
static void addFloat(float *a,float *b,float *sum)
{
	*sum = (*a)+(*b);
	return;
}
static void addShort(short *a,short *b,short *sum)
{
	*sum = (*a)+(*b);
	return;
}
static void addLong(long *a,long *b,long *sum)
{
	*sum = (*a)+(*b);
	return;
}
static void addDouble(double *a,double *b,double *sum)
{
	*sum = (*a)+(*b);
	return;
}

//减法
static void subInt(int *a,int *b,int *res)
{
	*res = (*a)-(*b);
	return;
}
static void subFloat(float *a,float *b,float *res)
{
	*res = (*a)-(*b);
	return;
}
static void subShort(short *a,short *b,short *res)
{
	*res = (*a)-(*b);
	return;
}
static void subLong(long *a,long *b,long *res)
{
	*res = (*a)-(*b);
	return;
}
static void subDouble(double *a,double *b,double *res)
{
	*res = (*a)-(*b);
	return;
}
//乘法
static void multipleInt(int *a,int *b,int *res)
{
	*res = (*a)*(*b);
	return;
}
static void multipleFloat(float *a,float *b,float *res)
{
	*res = (*a)*(*b);
	return;
}
static void multipleShort(short *a,short *b,short *res)
{
	*res = (*a)*(*b);
	return;
}
static void multipleLong(long *a,long *b,long *res)
{
	*res = (*a)*(*b);
	return;
}
static void multipleDouble(double *a,double *b,double *res)
{
	*res = (*a)*(*b);
	return;
}
//除法
static void divisionInt(int *a,int *b,int *res)
{
	*res = (*a)/(*b);
	return;
}
static void divisionFloat(float *a,float *b,float *res)
{
	*res = (*a)/(*b);
	return;
}
static void divisionShort(short *a,short *b,short *res)
{
	*res = (*a)/(*b);
	return;
}
static void divisionLong(long *a,long *b,long *res)
{
	*res = (*a)/(*b);
	return;
}
static void divisionDouble(double *a,double *b,double *res)
{
	*res = (*a)/(*b);
	return;
}
//取模
static void modeInt(int *a,int *b,int *res)
{
	*res = (*a)%(*b);
	return;
}
static void modeShort(short *a,short *b,short *res)
{
	*res = (*a)%(*b);
	return;
}
static void modeLong(long *a,long *b,long *res)
{
	*res = (*a)%(*b);
	return;
}

typedef void (*funtype)(void *,void *,void *);


void simpleArithmetic(void *a,void *b,void *res,void (*pfun)(void *,void *,void *))
{
	pfun = (void (*)(void *,void *,void *))pfun;
	pfun(a,b,res);
	return;
}

void * fun[23]={
	addInt,addFloat,addLong,addShort,addDouble,
	subInt,subFloat,subLong,subShort,subDouble,
	multipleInt,multipleFloat,multipleLong,multipleShort,multipleDouble,
	divisionInt,divisionFloat,divisionLong,divisionShort,divisionDouble,
	modeInt,modeLong,modeShort
};

void innerSimpleArithmetic(void *a,void *b,void *res,int type)
{
	((funtype)fun[type])(a,b,res);
	return;
}

