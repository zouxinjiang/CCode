#include <stdio.h>

typedef struct helloWorld
{
	char * name;
	void (*say)(struct helloWorld *);
	void (*setName1)(struct helloWorld *,char * name);
}helloWorld;

void sayHello(helloWorld *);
void setName(helloWorld *,char *);
