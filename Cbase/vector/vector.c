#include <stdlib.h>
#include "vector.h"
#if !defined(ELEMTYPE)
#define ELEMTYPE int
#else

/**
typedef struct vector
{
	ELEMTYPE * elem;
	unsigned int _size;
	unsigned int _maxSize;
}vector;
*/
#endif
/**
*				局部函数
*	fn			扩容
*	v 			向量指针
*	newSz 		扩容的容量
*	return		空
*/
static void enlarge(vector *v,int newSz)
{
	if(v == NULL){ return ;}
	if(v->_maxSize == 0){
		if(newSz == DEFAULT){
			v->elem = (ELEMTYPE *)malloc(sizeof(ELEMTYPE)*5);
			if(v->elem == NULL){ return ;}
			memset(v->elem,0,5);
			v->_maxSize = 5;
		}else{
			v->elem = (ELEMTYPE *)malloc(sizeof(ELEMTYPE)*newSz);
			if(v->elem == NULL){ return ;}
			memset(v->elem,0,newSz);
			v->_maxSize = newSz;
		}
	}else{
		if(newSz == DEFAULT){
			v->elem = (ELEMTYPE *)realloc(v->elem,sizeof(ELEMTYPE)*(v->_maxSize * 2));
			if(v->elem == NULL){ return ;}
			memset(v->elem + v->_maxSize,0,v->_maxSize);
			v->_maxSize *= 2;
		}else{
			v->elem = (ELEMTYPE *)realloc(v->elem,sizeof(ELEMTYPE)*(v->_maxSize + newSz));
			if(v->elem == NULL){ return ;}
			memset(v->elem + v->_maxSize,0,newSz);
			v->_maxSize += newSz;
		}
	}

}
/**
*				局部函数
*	fn			缩容
*	v 			向量指针
*	return		空
*/
static void shrink(vector *v)
{
	//为空，或最大空间为空，或最大空间与已使用空间的大小小于5，都直接返回，不缩容
	if(v == NULL){ return ;}
	if(v->_maxSize == 0){ return ;}
	if(5 > (v->_maxSize - v->_size)){ return ;}
	int idle = (v->_maxSize - v->_size);
	//缩掉空闲空间的一半
	ELEMTYPE * newVector = (ELEMTYPE *)malloc(sizeof(ELEMTYPE)*(v->_size + (idle / 2)));
	if(newVector == NULL){ return ;}
	v->elem = memcpy(newVector,v->elem,v->_size);
	v->_maxSize = v->_size + (idle / 2);
}

void initVector(vector *v)
{
	if(v == NULL){ return ;}
	v->elem = NULL;
	v->_size = 0;
	v->_maxSize = 0;
}
/**
*	fn				入栈操作
*	v    			向量指针
*	val				入栈的值
*	return			空值
*/
void push(vector *v ,ELEMTYPE val)
{
	if(v == NULL){ return ;}
	//是否需要扩容
	if(v->_maxSize == v->_size || v->_maxSize == 0){
		enlarge(v,DEFAULT);
	}
	v->elem[v->_size] = val;
	v->_size++;
}
/**
*	fn				出栈操作
*	v    			向量指针
*	return			出栈的值
*/
ELEMTYPE pop(vector *v)
{
	if(v == NULL){ return NULL;}
	if(v->_size == 0){ return NULL;}
	v->_size--;
	return v->elem[v->_size];
}
/**
*	fn				插入操作
*	v    			向量指针
*	val				插入的值
*	position		插入的位置
*	return			空
*/
void insert(vector * v,ELEMTYPE val,int position)
{
	int i = 0;
	if(v == NULL){ return ;}
	if(position < 0 || position > v->_maxSize){ return ;}

	if(v->_maxSize == v->_size){ enlarge(v,DEFAULT); }
	if(position >= v->_size){
		push(v,val);
	}else{
		//移动元素
		for(i = v->_size;i > position-1;i--){
			v->elem[i] = v->elem[i-1];
		}
		v->elem[i] = val;
		v->_size++;
	}
}
void delete(vector *v,ELEMTYPE val,int maxNum)
{

}

