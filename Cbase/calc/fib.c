#include <stdio.h>
#include <stdlib.h>

long fib(long end);
__int64 fib2(__int64 end);

int main(int argc,char * argv[])
{
	int i = 0;
	long arg = 0;
	if(argc < 1){
		printf("参数不足\n");
		return 0;
	}
	arg = atol(argv[1]);
	for(i = 0;i <= arg;i++){
		//printf("f(%d)=%ld\n",i,fib(i));
		printf("f(%d)=%lld\n",i,fib2(i));
	}

}

long fib(long end)
{
	return (end < 2) ? end : fib(end-1) + fib(end-2);
}

__int64 fib2(__int64 end)
{
	if(end == 0){
		return 0;
	}
	__int64 f = 0,g = 1;
	while(0 < --end){
		g = g + f;
		f = g - f;
	}
	return g;
}