/**
*  	author:zouxinjiang
*	date:2017-08-12
*	
*	description:  这个文件描述结构体
*/

#include <stdio.h>

typedef struct myClass
{
	int a;
	int b;
	int c;
	int (*padd)(int a,int b);
} myClass;

static int add(int a,int b);
int main(int argc,char * argv[])
{
	myClass  my;
	my.a = 1;
	my.b = 2;
	my.c = 3;
	my.padd = add;

	printf("%d\n",my.padd(my.a,my.b));

}
int add(int a,int b)
{
	return a+b;
}
