#include "myfun.h"

int main(int argc,char * argv[])
{

	int *res=(int *)malloc(sizeof(int)),a=12,b=22;

	simpleArithmetic(&a,&b,res,(void *)SUBINT);
	printf("%d\n",*res);

	return 0;
}