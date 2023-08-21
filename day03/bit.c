#include<stdio.h>
int main(void){
	printf("请输入一个十进制数\n");
	short a=0;
	scanf("%hd",&a);
	printf("二进制数为\n");
	for(int i=15;i>=0;i--){

	printf("%d"	,(a&(1<<i))? 1 :0);
	
	}

	printf("\n");
	return 0;
}
