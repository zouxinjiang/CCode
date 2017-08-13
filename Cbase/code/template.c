/**
*  	author:zouxinjiang
*	date:2017-08-12
*	
*	description:  实现泛型的功能
*	泛型指的是函数的不管参数的类型，如实现加法，通过一个函数，实现int，float，long等类型的加法
*	随便传入什么类型的参数，都能得到结果
*
*	实现的原理:   void *指任何类型的指针，相当于一个泛型指针，所以我们要实现参数任意类型就要用到他
*				因为不同类型的加法是不同的，所以要传入函数指针才能实现真正意义上的泛型。
*/
#include <stdio.h>
#include <stdlib.h>

//假泛型
void * add(void *a,void *b)
{
	int *c;
	c = (int *)malloc(sizeof(int));
	*c = *((int *)a) + *((int *)b);
	return c;
}

//泛型函数
void addTem(void *a,void *b,void *sum,void (*pfun)(void *,void *,void *));
//功能函数
void addint(int *,int *,int *);
void addfloat(float *a,float *b,float *sum);
int main(int argc,char* argv[])
{
	int *a=0,c=1,d=3;
	float *fsum=(float *)malloc(sizeof(float)),fa=3.3,fb=5.5;
	a = (int *)add(&c,&d);
	printf("0x%p-->%d\n\n",a,*a);

	addTem(&c,&d,a,(void *)addint);
	printf("0x%p-->%d\n\n",a,*a);

	addTem(&fa,&fb,fsum,(void *)addfloat);
	printf("0x%p-->%f\n\n",fsum,*fsum);

	return 0;
}

//要实现真泛型，那么就要用到函数指针
void addTem(void *a,void *b,void *sum,void (*pfun)(void *,void *,void *))
{
	pfun = (void (*)(void *,void *,void *))pfun;
	pfun(a,b,sum);
	return;
}

void addint(int *a,int *b,int *sum)
{
	*sum = (*a)+(*b);
	return;
}
void addfloat(float *a,float *b,float *sum)
{
	*sum = (*a)+(*b);
	return;
}
