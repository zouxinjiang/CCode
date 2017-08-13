#include "myfun.h"

void simpleArithmetic(void *a,void *b,void *res,void (*pfun)(void *,void *,void *))
{
	pfun = (void (*)(void *,void *,void *))pfun;
	pfun(a,b,res);
	return;
}
void addInt(int *a,int *b,int *sum)
{
	*sum = (*a)+(*b);
	return;
}
void addFloat(float *a,float *b,float *sum)
{
	*sum = (*a)+(*b);
	return;
}
 void addShort(short *a,short *b,short *sum)
{
	*sum = (*a)+(*b);
	return;
}
 void addLong(long *a,long *b,long *sum)
{
	*sum = (*a)+(*b);
	return;
}
 void addDouble(double *a,double *b,double *sum)
{
	*sum = (*a)+(*b);
	return;
}

//减法
 void subInt(int *a,int *b,int *res)
{
	*res = (*a)-(*b);
	return;
}
 void subFloat(float *a,float *b,float *res)
{
	*res = (*a)-(*b);
	return;
}
 void subShort(short *a,short *b,short *res)
{
	*res = (*a)-(*b);
	return;
}
 void subLong(long *a,long *b,long *res)
{
	*res = (*a)-(*b);
	return;
}
 void subDouble(double *a,double *b,double *res)
{
	*res = (*a)-(*b);
	return;
}
//乘法
 void multipleInt(int *a,int *b,int *res)
{
	*res = (*a)*(*b);
	return;
}
 void multipleFloat(float *a,float *b,float *res)
{
	*res = (*a)*(*b);
	return;
}
 void multipleShort(short *a,short *b,short *res)
{
	*res = (*a)*(*b);
	return;
}
 void multipleLong(long *a,long *b,long *res)
{
	*res = (*a)*(*b);
	return;
}
 void multipleDouble(double *a,double *b,double *res)
{
	*res = (*a)*(*b);
	return;
}
//除法
 void divisionInt(int *a,int *b,int *res)
{
	*res = (*a)/(*b);
	return;
}
 void divisionFloat(float *a,float *b,float *res)
{
	*res = (*a)/(*b);
	return;
}
 void divisionShort(short *a,short *b,short *res)
{
	*res = (*a)/(*b);
	return;
}
 void divisionLong(long *a,long *b,long *res)
{
	*res = (*a)/(*b);
	return;
}
 void divisionDouble(double *a,double *b,double *res)
{
	*res = (*a)/(*b);
	return;
}
//取模
 void modeInt(int *a,int *b,int *res)
{
	*res = (*a)%(*b);
	return;
}
 void modeShort(short *a,short *b,short *res)
{
	*res = (*a)%(*b);
	return;
}
 void modeLong(long *a,long *b,long *res)
{
	*res = (*a)%(*b);
	return;
}
