#ifndef VECTOR
#define VECTOR

#define TRUE 1
#define FALSE 0
#define DEFAULT	-1
#define ERROR -2
#define FAILED -1

#if defined(DEFVECTOR)
#undef DEFVECTOR
#endif
#define DEFVECTOR(elemType,vectorName)  typedef struct vector\
{\
	elemType * elem;\
	unsigned int _size;\
	unsigned int _maxSize;\
	int (*cmp)(ELEMTYPE v1,ELEMTYPE v2);\
}vectorName;
// typedef struct vector
// {
// 	ELEMTYPE * elem;
// 	unsigned int _size;
// 	unsigned int _maxSize;
// 	int (*cmp)(struct vector v1,struct vector v2);
// }vector;
#ifndef ELEMTYPE
#define ELEMTYPE int
#endif
DEFVECTOR(ELEMTYPE,vector);

void vctInit(struct vector *v);
//末尾增加元素
void vctPush(struct vector *v ,ELEMTYPE val);
//末尾删除元素
ELEMTYPE vctPop(struct vector *v);
//插入元素
void vctInsert(struct vector * v,ELEMTYPE val,int position);
//删除指定元素,可以指定最大删除个数
void vctDelete(struct vector *v,ELEMTYPE val,int maxNum);
//删除某个区间的所有值
int vctRemove(struct vector * v,int lo,int hi);
//查找某元素
int vctFind(struct vector v,ELEMTYPE val,int lo,int hi);
//查找所有
//void	vctFindAll(struct vector *v,ELEMTYPE val,int lo,int hi);
//获取某个元素
ELEMTYPE vctGet(struct vector v,int position);
//获取某个区间的元素
int vctRange(struct vector v,int lo,int hi,struct vector *target);
//倒置内容
void vctReverse(struct vector * v,int lo,int hi);
//擦除
void vctErase(struct vector *v,int lo,int hi,ELEMTYPE val);
//排序
void vctSort(struct vector *v,void *pfun);
//交换元素
void vctSwap(struct vector *v, int pos1,int pos2);
//获取大小
int vctSize(struct vector v);
//判空
int vctIsEmpty(struct vector v);
//最大容量
int vctMaxSize(struct vector v);
//设置比较函数
void vctSetCompare(struct vector *v,int (*cmpfun)(ELEMTYPE v1,ELEMTYPE v2));

#endif