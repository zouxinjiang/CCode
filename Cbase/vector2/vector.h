#ifndef VECTOR
#define VECTOR

#define TRUE 1
#define FALSE 0
#define ELEM_CHAR   1
#define ELEM_STR	2
#define ELEM_STRUCT	3
#define ELEM_NUMBER	4

#define DEFELEMTYPE(type,elemType) \
#if type==ELEM_CHAR
#define ELEMTYPE char
#elif type==ELEM_STR
#define ELEMTYPE char*
#elif type==ELEM_STRUCT
#define ELEMTYPE elemType
#elif type==ELEM_NUMBER
#define ELEMTYPE elemType
#else

#endif

//定义结构体框架
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


#endif