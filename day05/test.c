#include<stdio.h>
int main(void){


	int a=0x12345678;
	void*p=&a;
	printf("%#x\n",*(char*)p);
	printf("%#x\n",*(short*)(p+2));
	int b;
	int* f=&b;
	printf("%p\n",f);
	f++;
	printf("%p\n",f);


	return 0;
}
