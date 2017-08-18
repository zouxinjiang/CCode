#include "helloWorldClass.h"

void sayHello(helloWorld *self)
{
	printf("hello %s\n",self->name);
}

void setName(helloWorld *self,char * name)
{
	self->name=name;
}