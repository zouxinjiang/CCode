# 1 "vector.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "vector.c"
# 1 "e:\\gcc\\install\\include\\stdlib.h" 1 3
# 34 "e:\\gcc\\install\\include\\stdlib.h" 3
       
# 35 "e:\\gcc\\install\\include\\stdlib.h" 3
# 49 "e:\\gcc\\install\\include\\stdlib.h" 3
# 1 "e:\\gcc\\install\\include\\_mingw.h" 1 3
# 55 "e:\\gcc\\install\\include\\_mingw.h" 3
       
# 56 "e:\\gcc\\install\\include\\_mingw.h" 3
# 66 "e:\\gcc\\install\\include\\_mingw.h" 3
# 1 "e:\\gcc\\install\\include\\msvcrtver.h" 1 3
# 35 "e:\\gcc\\install\\include\\msvcrtver.h" 3
       
# 36 "e:\\gcc\\install\\include\\msvcrtver.h" 3
# 67 "e:\\gcc\\install\\include\\_mingw.h" 2 3






# 1 "e:\\gcc\\install\\include\\w32api.h" 1 3
# 35 "e:\\gcc\\install\\include\\w32api.h" 3
       
# 36 "e:\\gcc\\install\\include\\w32api.h" 3
# 59 "e:\\gcc\\install\\include\\w32api.h" 3
# 1 "e:\\gcc\\install\\include\\sdkddkver.h" 1 3
# 35 "e:\\gcc\\install\\include\\sdkddkver.h" 3
       
# 36 "e:\\gcc\\install\\include\\sdkddkver.h" 3
# 60 "e:\\gcc\\install\\include\\w32api.h" 2 3
# 74 "e:\\gcc\\install\\include\\_mingw.h" 2 3
# 50 "e:\\gcc\\install\\include\\stdlib.h" 2 3





# 1 "e:\\gcc\\install\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 1 3 4
# 216 "e:\\gcc\\install\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4

# 216 "e:\\gcc\\install\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef unsigned int size_t;
# 328 "e:\\gcc\\install\\lib\\gcc\\mingw32\\6.3.0\\include\\stddef.h" 3 4
typedef short unsigned int wchar_t;
# 56 "e:\\gcc\\install\\include\\stdlib.h" 2 3
# 90 "e:\\gcc\\install\\include\\stdlib.h" 3

# 99 "e:\\gcc\\install\\include\\stdlib.h" 3
extern int _argc;
extern char **_argv;




extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *__p___argc(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) char ***__p___argv(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t ***__p___wargv(void);
# 142 "e:\\gcc\\install\\include\\stdlib.h" 3
   extern __attribute__((__dllimport__)) int __mb_cur_max;
# 166 "e:\\gcc\\install\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *_errno(void);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int *__doserrno(void);







extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) char ***__p__environ(void);

extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t ***__p__wenviron(void);
# 202 "e:\\gcc\\install\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) int _sys_nerr;
# 227 "e:\\gcc\\install\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) char *_sys_errlist[];
# 238 "e:\\gcc\\install\\include\\stdlib.h" 3
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__osver(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winver(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winmajor(void);
extern __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int *__p__winminor(void);
# 250 "e:\\gcc\\install\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) unsigned int _osver;
extern __attribute__((__dllimport__)) unsigned int _winver;
extern __attribute__((__dllimport__)) unsigned int _winmajor;
extern __attribute__((__dllimport__)) unsigned int _winminor;
# 289 "e:\\gcc\\install\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char **__p__pgmptr(void);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t **__p__wpgmptr(void);
# 325 "e:\\gcc\\install\\include\\stdlib.h" 3
extern __attribute__((__dllimport__)) int _fmode;
# 335 "e:\\gcc\\install\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int atoi (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long atol (const char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double strtod (const char *, char **);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double atof (const char *);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double _wtof (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wtoi (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long _wtol (const wchar_t *);
# 378 "e:\\gcc\\install\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__))
float strtof (const char *__restrict__, char **__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
long double strtold (const char *__restrict__, char **__restrict__);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long strtol (const char *, char **, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long strtoul (const char *, char **, int);







 __attribute__((__cdecl__)) __attribute__((__nothrow__))
long wcstol (const wchar_t *, wchar_t **, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
unsigned long wcstoul (const wchar_t *, wchar_t **, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) double wcstod (const wchar_t *, wchar_t **);





__attribute__((__cdecl__)) __attribute__((__nothrow__))
float wcstof (const wchar_t *__restrict__, wchar_t **__restrict__);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
long double wcstold (const wchar_t *__restrict__, wchar_t **__restrict__);
# 451 "e:\\gcc\\install\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_wgetenv (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wputenv (const wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wsearchenv (const wchar_t *, const wchar_t *, wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _wsystem (const wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wmakepath (wchar_t *, const wchar_t *, const wchar_t *, const wchar_t *,
    const wchar_t *
  );

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _wsplitpath (const wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
wchar_t *_wfullpath (wchar_t *, const wchar_t *, size_t);





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t wcstombs (char *, const wchar_t *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int wctomb (char *, wchar_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int mblen (const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) size_t mbstowcs (wchar_t *, const char *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int mbtowc (wchar_t *, const char *, size_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int rand (void);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void srand (unsigned int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *calloc (size_t, size_t) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *malloc (size_t) __attribute__((__malloc__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void *realloc (void *, size_t);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void free (void *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void abort (void) __attribute__((__noreturn__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void exit (int) __attribute__((__noreturn__));



int __attribute__((__cdecl__)) __attribute__((__nothrow__)) atexit (void (*)(void));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int system (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *getenv (const char *);






 __attribute__((__cdecl__)) void *bsearch
(const void *, const void *, size_t, size_t, int (*)(const void *, const void *));

 __attribute__((__cdecl__)) void qsort
(void *, size_t, size_t, int (*)(const void *, const void *));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int abs (int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long labs (long) __attribute__((__const__));
# 519 "e:\\gcc\\install\\include\\stdlib.h" 3
typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) div_t div (int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) ldiv_t ldiv (long, long) __attribute__((__const__));






 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _exit (int) __attribute__((__noreturn__));





 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long long _atoi64 (const char *);
# 545 "e:\\gcc\\install\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _beep (unsigned int, unsigned int) __attribute__((__deprecated__));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _seterrormode (int) __attribute__((__deprecated__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void _sleep (unsigned long) __attribute__((__deprecated__));



typedef int (* _onexit_t)(void);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) _onexit_t _onexit( _onexit_t );

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _putenv (const char *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _searchenv (const char *, const char *, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ecvt (double, int, int *, int *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_fcvt (double, int, int *, int *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_gcvt (double, int, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _makepath (char *, const char *, const char *, const char *, const char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__))
void _splitpath (const char *, char *, char *, char *, char *);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_fullpath (char*, const char*, size_t);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_itoa (int, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ltoa (long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char *_ultoa(unsigned long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_itow (int, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_ltow (long, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t *_ultow (unsigned long, wchar_t *, int);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* _i64toa (long long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* _ui64toa (unsigned long long, char *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) long long _wtoi64 (const wchar_t *);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t* _i64tow (long long, wchar_t *, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) wchar_t* _ui64tow (unsigned long long, wchar_t *, int);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int (_rotl)(unsigned int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned int (_rotr)(unsigned int, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long (_lrotl)(unsigned long, int) __attribute__((__const__));
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) unsigned long (_lrotr)(unsigned long, int) __attribute__((__const__));

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int _set_error_mode (int);
# 628 "e:\\gcc\\install\\include\\stdlib.h" 3
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) int putenv (const char*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) void searchenv (const char*, const char*, char*);

 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* itoa (int, char*, int);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* ltoa (long, char*, int);


 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* ecvt (double, int, int*, int*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* fcvt (double, int, int*, int*);
 __attribute__((__cdecl__)) __attribute__((__nothrow__)) char* gcvt (double, int, char*);
# 649 "e:\\gcc\\install\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) void _Exit(int) __attribute__((__noreturn__));






typedef struct { long long quot, rem; } lldiv_t;
__attribute__((__cdecl__)) __attribute__((__nothrow__)) lldiv_t lldiv (long long, long long) __attribute__((__const__));

__attribute__((__cdecl__)) __attribute__((__nothrow__)) long long llabs (long long);
# 670 "e:\\gcc\\install\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__))
long long strtoll (const char *__restrict__, char **__restrict, int);

__attribute__((__cdecl__)) __attribute__((__nothrow__))
unsigned long long strtoull (const char *__restrict__, char **__restrict__, int);





__attribute__((__cdecl__)) __attribute__((__nothrow__)) long long atoll (const char *);
# 726 "e:\\gcc\\install\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) long long wtoll (const wchar_t *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) char *lltoa (long long, char *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) char *ulltoa (unsigned long long , char *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) wchar_t *lltow (long long, wchar_t *, int);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) __attribute__((__deprecated__)) wchar_t *ulltow (unsigned long long, wchar_t *, int);
# 766 "e:\\gcc\\install\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int mkstemp (char *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __mingw_mkstemp (int, char *);
# 808 "e:\\gcc\\install\\include\\stdlib.h" 3
extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int mkstemp (char *__filename_template)
{ return __mingw_mkstemp( 0, __filename_template ); }
# 819 "e:\\gcc\\install\\include\\stdlib.h" 3
__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *mkdtemp (char *);
__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *__mingw_mkdtemp (char *);

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) char *mkdtemp (char *__dirname_template)
{ return __mingw_mkdtemp( __dirname_template ); }






__attribute__((__cdecl__)) __attribute__((__nothrow__)) int setenv( const char *, const char *, int );
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int unsetenv( const char * );

__attribute__((__cdecl__)) __attribute__((__nothrow__)) int __mingw_setenv( const char *, const char *, int );

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int setenv( const char *__n, const char *__v, int __f )
{ return __mingw_setenv( __n, __v, __f ); }

extern inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__))
__attribute__((__cdecl__)) __attribute__((__nothrow__)) int unsetenv( const char *__name )
{ return __mingw_setenv( __name, ((void *)0), 1 ); }





# 2 "vector.c" 2
# 1 "vector.h" 1
# 10 "vector.h"

# 10 "vector.h"
typedef struct vector
{
 int * elem;
 unsigned int _size;
 unsigned int _maxSize;
}vector;


void initVector(vector *v);

void push(vector *v ,int val);

int pop(vector *v);

void insert(vector * v,int val,int position);

void delete(vector *v,int val,int maxNum);

void Vremove(vector * v,int lo,int hi);

int find(vector *v,int val,int lo,int hi);

void findAll(vector *v,int val,int lo,int hi);

int get(vector v,int position);

vector range(vector v,int lo,int hi);

void reverse(vector * v,int lo,int hi);

void erase(vector *v,int lo,int hi,int val);

void sort(vector *v,void *pfun);

void swap(int pos1,int pos2);

int size(vector v);

int isEmpty(vector v);

int maxSize(vector v);
# 3 "vector.c" 2
# 23 "vector.c"
static void enlarge(vector *v,int newSz)
{
 if(v == 
# 25 "vector.c" 3 4
        ((void *)0)
# 25 "vector.c"
            ){ return ;}
 if(v->_maxSize == 0){
  if(newSz == -1){
   v->elem = (int *)malloc(sizeof(int)*5);
   if(v->elem == 
# 29 "vector.c" 3 4
                ((void *)0)
# 29 "vector.c"
                    ){ return ;}
   memset(v->elem,0,5);
   v->_maxSize = 5;
  }else{
   v->elem = (int *)malloc(sizeof(int)*newSz);
   if(v->elem == 
# 34 "vector.c" 3 4
                ((void *)0)
# 34 "vector.c"
                    ){ return ;}
   memset(v->elem,0,newSz);
   v->_maxSize = newSz;
  }
 }else{
  if(newSz == -1){
   v->elem = (int *)realloc(v->elem,sizeof(int)*(v->_maxSize * 2));
   if(v->elem == 
# 41 "vector.c" 3 4
                ((void *)0)
# 41 "vector.c"
                    ){ return ;}
   memset(v->elem + v->_maxSize,0,v->_maxSize);
   v->_maxSize *= 2;
  }else{
   v->elem = (int *)realloc(v->elem,sizeof(int)*(v->_maxSize + newSz));
   if(v->elem == 
# 46 "vector.c" 3 4
                ((void *)0)
# 46 "vector.c"
                    ){ return ;}
   memset(v->elem + v->_maxSize,0,newSz);
   v->_maxSize += newSz;
  }
 }

}






static void shrink(vector *v)
{

 if(v == 
# 62 "vector.c" 3 4
        ((void *)0)
# 62 "vector.c"
            ){ return ;}
 if(v->_maxSize == 0){ return ;}
 if(5 > (v->_maxSize - v->_size)){ return ;}
 int idle = (v->_maxSize - v->_size);

 int * newVector = (int *)malloc(sizeof(int)*(v->_size + (idle / 2)));
 if(newVector == 
# 68 "vector.c" 3 4
                ((void *)0)
# 68 "vector.c"
                    ){ return ;}
 v->elem = memcpy(newVector,v->elem,v->_size);
 v->_maxSize = v->_size + (idle / 2);
}

void initVector(vector *v)
{
 if(v == 
# 75 "vector.c" 3 4
        ((void *)0)
# 75 "vector.c"
            ){ return ;}
 v->elem = 
# 76 "vector.c" 3 4
          ((void *)0)
# 76 "vector.c"
              ;
 v->_size = 0;
 v->_maxSize = 0;
}






void push(vector *v ,int val)
{
 if(v == 
# 88 "vector.c" 3 4
        ((void *)0)
# 88 "vector.c"
            ){ return ;}

 if(v->_maxSize == v->_size || v->_maxSize == 0){
  enlarge(v,-1);
 }
 v->elem[v->_size] = val;
 v->_size++;
}





int pop(vector *v)
{
 if(v == 
# 103 "vector.c" 3 4
        ((void *)0)
# 103 "vector.c"
            ){ return 
# 103 "vector.c" 3 4
                      ((void *)0)
# 103 "vector.c"
                          ;}
 if(v->_size == 0){ return 
# 104 "vector.c" 3 4
                          ((void *)0)
# 104 "vector.c"
                              ;}
 v->_size--;
 return v->elem[v->_size];
}







void insert(vector * v,int val,int position)
{
 int i = 0;
 if(v == 
# 118 "vector.c" 3 4
        ((void *)0)
# 118 "vector.c"
            ){ return ;}
 if(position < 0 || position > v->_maxSize-1){ return ;}

 if(v->_maxSize == v->_size){ enlarge(v,-1); }
 if(position >= v->_size){
  push(v,val);
 }else{

  for(i = v->_size;i > position;i--){
   v->elem[i] = v->elem[i-1];
  }
  v->elem[i] = val;
  v->_size++;
 }
}
void delete(vector *v,int val,int maxNum)
{

}
