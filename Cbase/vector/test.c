#define ELEMTYPE int
 //#include <stdio.h>
// #include <stdlib.h>
#include "vector.h"
#include <stdio.h>

void vctPrint(vector v);

int main(int argc,char* argv[])
{
	vector v,tem;
	vctInit(&v);
	vctPush(&v,1);
	vctPush(&v,3);
	vctPush(&v,5);
	vctPush(&v,7);
	vctPush(&v,2);
	vctPush(&v,4);
	vctPush(&v,6);
	vctPush(&v,8);
	vctPrint(v);
	printf("-------------------\n");
	vctPop(&v);
	vctPrint(v);
	printf("-------------------\n");
	vctInsert(&v,100,5);
	vctPrint(v);
	printf("-------------------\n");
	vctInsert(&v,101,5);
	vctInsert(&v,102,5);
	vctInsert(&v,103,5);
	vctInsert(&v,200,5);
	vctInsert(&v,200,5);
	vctInsert(&v,200,5);
	vctPrint(v);
	printf("-------------------\n");
	// //???????
	// vctDelete(&v,200,2);
	// vctPrint(v);
	// printf("-------------------\n");
	printf("====%d====\n", v._maxSize);
	vctRemove(&v,3,7);
	vctPrint(v);
	printf("-------------------\n");
	printf("====%d====\n", v._maxSize);


	vctRange(v,3,7,&tem);
	vctPrint(tem);
	printf("-------------------\n");

	vctReverse(&v,3,10);
	vctPrint(v);
	printf("R-------------------\n");
	vctErase(&v,5,5,0);
	vctPrint(v);
	printf("R-------------------\n");
	vctSwap(&v,2,7);
	vctPrint(v);
	printf("R-------------------\n");

	
	return 0;
}

void vctPrint(vector v)
{
	int i = 0;
	for(i = 0;i < v._size;i++){
		printf("%d ==> %d \n",i,v.elem[i]);
	}
}