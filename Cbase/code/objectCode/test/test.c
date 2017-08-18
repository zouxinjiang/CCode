#include "helloWorldClass.h"

void main(int argc,char * argv[])
{
	helloWorld hello;
	//hello.name = "zouxinjiang";
	hello.setName1=setName;
	hello.setName1(&hello,"zouxinjiang");
	hello.say=sayHello;
	hello.say(&hello);
}