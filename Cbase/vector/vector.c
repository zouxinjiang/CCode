#include <stdlib.h>
#include "vector.h"
// #if !defined(ELEMTYPE)
// #define ELEMTYPE int
// #else

// *
// typedef struct vector
// {
// 	ELEMTYPE * elem;
// 	unsigned int _size;
// 	unsigned int _maxSize;
// }vector;

// #endif
/**
*				局部函数
*	fn			扩容
*	v 			向量指针
*	newSz 		扩容的容量
*	return		空
*/
static void enlarge(struct vector *v,int newSz)
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
static void shrink(struct vector *v)
{
	//为空，或最大空间为空，或最大空间与已使用空间的大小小于5，都直接返回，不缩容
	ELEMTYPE *tem = v->elem;
	if(v == NULL){ return ;}
	if(v->_maxSize == 0){ return ;}
	if(5 > (v->_maxSize - v->_size)){ return ;}
	int idle = (v->_maxSize - v->_size);
	//缩掉空闲空间的一半
	ELEMTYPE * newVector = (ELEMTYPE *)malloc(sizeof(ELEMTYPE)*(v->_size + (idle / 2)));
	if(newVector == NULL){ return ;}
	memcpy(newVector,v->elem,v->_size*sizeof(ELEMTYPE));
	v->elem = newVector;
	v->_maxSize = v->_size + (idle / 2);
	free(tem);
}
/**
*	调整区间
*/
static int adjustRange(struct vector v,int *lo,int *hi)
{
	if(lo > hi){ 
		return FALSE;
	}
	if( *lo <= 0 ){ *lo = 1; }
	if( *lo > v._size ){ *lo = v._size+1;}
	if( *hi > v._size ){ *hi = v._size+1; }
	return TRUE;
}
void vctInit(struct vector *v)
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
void vctPush(struct vector *v ,ELEMTYPE val)
{
	if(v == NULL){ return ;}
	//是否需要扩容
	if(v->_maxSize == v->_size || v->_maxSize == 0){
		enlarge(v,DEFAULT);
	}
	*(v->elem+v->_size) = val;
	v->_size++;
	printf("---------=======%c==========--------\n",*(v->elem+v->_size-2) );
}
/**
*	fn				出栈操作
*	v    			向量指针
*	return			出栈的值
*/
ELEMTYPE vctPop(struct vector *v)
{
	if(v == NULL){ return NULL;}
	if(v->_size == 0){ return NULL;}
	v->_size--;
	return v->elem[v->_size];
}

/**
*	fn				查找操作
*	v    			向量指针
*	val				查找的值
*	lo,hi			查找的区间[lo,hi)
*	return			第一个相同元素的位置
*					成功返回下标，失败返回-1，参数错误返回ERROR(-2)
*/
int vctFind(struct vector v,ELEMTYPE val,int lo,int hi)
{
	//如果lo > hi 交换两个数
	if(lo > hi){ 
		lo = lo ^ hi; 
		hi = lo ^ hi;
		lo = lo ^ hi;
	}
	if(lo < 0 || hi > v._size){ return ERROR;}
	for(int i = lo;i < hi;i++){
		if(0 == v.cmp(v.elem[i],val)){
			return i;
		}
	}
	return FAILED;
}
/**
*	fn				插入操作
*	v    			向量指针
*	val				插入的值
*	position		插入的位置
*	return			空
*/
void vctInsert(struct vector * v,ELEMTYPE val,int position)
{
	int i = 0;
	if(v == NULL){ return ;}
	if(position <= 0 || position > v->_maxSize){ return ;}

	if(v->_maxSize == v->_size){ enlarge(v,DEFAULT); }
	if(position >= v->_size){
		vctPush(v,val);
	}else{
		//移动元素
		for(i = v->_size;i > position-1;i--){
			v->elem[i] = v->elem[i-1];
		}
		v->elem[i] = val;
		v->_size++;
	}
}
/**
*	fn				删除操作
*	v    			向量指针
*	val				删除的值
*	position		最大的删除数量
*	return			实际删除的数量
*/
void vctDelete(struct vector *v,ELEMTYPE val,int maxNum)
{
	int cnt = 0,i = 0,del = 0;
	if(v == NULL){ return ;}
	if(maxNum == DEFAULT){
		cnt = 1;
	}else if(maxNum < 0){
		cnt = 0;
	}
	for(i = 0;i < v->_size; i++){
		if(cnt == 0){ break; }
		// if(0 == v->cmp(v->elem[i],val)){
		// 	vctRemove(v,i+1,i+2);
		// 	cnt--;
		// 	del++;
		// }
		if(v->elem[i]==val){
			vctRemove(v,i+1,i+2);
			cnt--;
			del++;
		}
		i++;
	}
	return del;
}
/**
*	fn				区间删除
*	v    			向量指针
*	lo				区间左值
*	hi 				区间右值
*	return			实际删除的数量
*/
int vctRemove(struct vector * v,int lo,int hi)
{
	int i = 0,cnt = 0;
	if(v == NULL){ return ERROR;}
	if(FALSE == adjustRange(*v,&lo,&hi)){ 
		return ERROR;
	}
	//容错
	if( lo == v->_size+1){
		return 0;
	}
	if( hi == v->_size+1){
		v->_size = v->_size - hi + lo;
		shrink(v);
		return (hi - lo);
	}

	for(i = hi ;i <= v->_size;i++){
		v->elem[i-1-hi+lo] = v->elem[i-1];
		cnt++;
	}
	v->_size -= (hi - lo);
	shrink(v);
	return cnt;
}
/**
*	fn 			获取指定偏移量的值
*	v 			向量
*	position 	偏移量
*	return		值
*/
ELEMTYPE vctGet(struct vector v,int position)
{
	if(position < 0 || position > v._size){ return NULL;}
	return v.elem[position-1];
}

//获取某个区间的元素
int vctRange(struct vector v,int lo,int hi,struct vector *target)
{
	int i = 0;
	if(FALSE == adjustRange(v,&lo,&hi)){ 
		return ERROR;
	}
	vctInit(target);
	if( lo == v._size+1){
		return target;
	}
	for(i = lo;i < hi;i++){
		vctPush(target,v.elem[i-1]);
	}
	return (hi -lo);
}
//倒置内容
void vctReverse(struct vector * v,int lo,int hi)
{
	if(v == NULL){ return;}
	if(FALSE == adjustRange(*v,&lo,&hi)){ 
		return ;
	}
	if( lo == v->_size+1){
		return;
	}
	//将区间调整成下标的样子
	if( hi == v->_size+1){
		hi = v->_size;
	}else{
		hi = hi - 1;
	}
	for(;lo < hi;lo++,hi--){
		vctSwap(v,lo,hi);
	}
}
//擦除
void vctErase(struct vector *v,int lo,int hi,ELEMTYPE val)
{
	if(v == NULL){ return;}
	if(FALSE == adjustRange(*v,&lo,&hi)){ 
		return ;
	}
	if( lo == v->_size+1){
		return;
	}
	//将区间调整成下标的样子
	if( hi == v->_size+1){
		hi = v->_size;
		lo--;
	}else{
		hi = hi - 1;
		lo--;
	}
	for(;lo < hi;lo++){
		v->elem[lo] = val;
	}
}
//排序
void vctSort(struct vector *v,void *pfun);
//交换元素
void vctSwap(struct vector *v, int pos1,int pos2)
{
	ELEMTYPE tem;
	if(v == NULL){ return;}
	if(pos1 <= 0 || pos1 > v->_size){ return; }
	if(pos2 <= 0 || pos2 > v->_size){ return; }
	tem = v->elem[pos1-1];
	v->elem[pos1-1] = v->elem[pos2-1];
	v->elem[pos2-1] = tem;
}
//获取大小
int vctSize(struct vector v)
{
	return v._size;
}
//判空
int vctIsEmpty(struct vector v)
{
	return ((v._size==0)?TRUE:FALSE);
}
//最大容量
int vctMaxSize(struct vector v)
{
	return v._maxSize;
}
//设置比较函数
void vctSetCompare(struct vector *v,int (*cmpfun)(ELEMTYPE v1,ELEMTYPE v2))
{
	v->cmp = cmpfun;
}
