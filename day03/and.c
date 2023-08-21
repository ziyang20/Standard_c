#include <stdio.h>
int main(void){

	char a=0x5a;
	char b=a<<2;
	short c=a<<2;
	printf("a=%#x\n",a);
	printf("b=%#x,c=%#x",b,c);



	return 0;
} 
