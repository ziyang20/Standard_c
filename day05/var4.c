#include <stdio.h>

int g_a=100;
int g_b=10066;

static void foo(void){

	printf("foo:%d  %d",g_a,g_b);

}

void bar(void){

	printf("bar:%d %d\n",g_a,g_b);
	foo();

}
