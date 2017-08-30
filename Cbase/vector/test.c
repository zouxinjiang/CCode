#define ELEMTYPE float
#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

void main(){
	// int *a=NULL;
	// a = (int *)malloc(sizeof(int)*4);
	// for(int i=0;i<4;i++){
	// 	*(a+i) = i;
	// }
	// for(int i=0;i<4;i++){
	// 	printf("%i\n", a[i]);
	// }
	vector v;
	initVector(&v);
	push(&v,2);
	push(&v,4);
	push(&v,6);
	push(&v,8);
	push(&v,7);
	push(&v,5);
	push(&v,3);
	push(&v,1);
	pop(&v);
	insert(&v,1,9);
	insert(&v,2,9);
	insert(&v,3,9);
	insert(&v,100,9);
	insert(&v,101,v._maxSize);
	printf("%d-------\t", v._size);
	for(int i = 0;i < v._size; i++){
		printf("%f\t", v.elem[i]);
	}
	printf("\n");


}
