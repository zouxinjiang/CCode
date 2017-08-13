#include "myfun.h"

int main(int argc,char * argv[])
{

	int *res=(int *)malloc(sizeof(int)),a=12,b=22;

	innerSimpleArithmetic(&a,&b,res,MULTINT);
	printf("%d\n",*res);
	return 0;
}