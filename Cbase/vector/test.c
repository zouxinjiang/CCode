#define ELEMTYPE char
 //#include <stdio.h>
// #include <stdlib.h>
#include "vector.h"
#include <stdio.h>

void vctPrint(vector v);

int main(int argc,char* argv[])
{
	vector v,tem;
	vctInit(&v);
	vctPush(&v,'a');
	vctPrint(v);
	printf("-------------------\n");
	vctPush(&v,'c');
	vctPrint(v);
	printf("-------------------\n");
	vctPush(&v,'f');
	vctPush(&v,'h');
	vctPush(&v,'b');
	vctPush(&v,'d');
	vctPush(&v,'f');
	vctPush(&v,'i');
	vctPrint(v);
	printf("-------------------\n");
	vctPop(&v);
	vctPrint(v);
	printf("-------------------\n");
	vctInsert(&v,'x',5);
	vctPrint(v);
	printf("-------------------\n");
	vctInsert(&v,'w',5);
	vctInsert(&v,'q',5);
	vctInsert(&v,'e',5);
	vctInsert(&v,'r',5);
	vctInsert(&v,'t',5);
	vctInsert(&v,'y',5);
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
	vctErase(&v,5,6,'p');
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
		printf("%d ==> %c \n",i,v.elem[i]);
	}
}