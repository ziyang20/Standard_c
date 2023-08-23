#include<stdio.h>
int main(void){
	char* str="hello";
	char str1[]="hello1";
	printf("%lu\n",sizeof(str1)/sizeof(char)); 
	str="good";
	printf("%s\n",str);

	return 0;


}
