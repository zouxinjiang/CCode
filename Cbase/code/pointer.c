/**
*  	author:zouxinjiang
*	date:2017-08-11
*	
*	description:  指针的用法
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char * argv[])
{
	int *pi1=0,*pi2=0;
	char *ps1=0,*ps2=0;

	pi1 = (int *)malloc(sizeof(int));
	pi2 = (int *)malloc(sizeof(int));
	ps1 = (char *)malloc(sizeof(char));
	ps2 = (char *)malloc(sizeof(char));

	printf("输入一个数\n");
	scanf("%d",pi1);

	printf("%d:size is %d\n", *pi1,sizeof(pi1));

}

