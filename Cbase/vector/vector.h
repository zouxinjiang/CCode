#ifndef VECTOR
#define VECTOR

#define TRUE 1
#define FALSE 0
#define DEFAULT	-1
#if !defined(ELEMTYPE) 
#define ELEMTYPE int
#endif
typedef struct vector
{
	ELEMTYPE * elem;
	unsigned int _size;
	unsigned int _maxSize;
}vector;


void initVector(vector *v);
//末尾增加元素
void push(vector *v ,ELEMTYPE val);
//末尾删除元素
ELEMTYPE pop(vector *v);
//插入元素
void insert(vector * v,ELEMTYPE val,int position);
//删除指定元素,可以指定最大删除个数
void delete(vector *v,ELEMTYPE val,int maxNum);
//删除某个区间的所有值
void Vremove(vector * v,int lo,int hi);
//查找某元素
int find(vector *v,ELEMTYPE val,int lo,int hi);
//查找所有
void	findAll(vector *v,ELEMTYPE val,int lo,int hi);
//获取某个元素
ELEMTYPE get(vector v,int position);
//获取某个区间的元素
vector range(vector v,int lo,int hi);
//倒置内容
void reverse(vector * v,int lo,int hi);
//擦除
void erase(vector *v,int lo,int hi,ELEMTYPE val);
//排序
void sort(vector *v,void *pfun);
//交换元素
void swap(int pos1,int pos2);
//获取大小
int size(vector v);
//判空
int isEmpty(vector v);
//最大容量
int maxSize(vector v);


#endif