#include<stdio.h>
int main(void){
	printf("请输入一个整数：");
	int a=0;
	scanf("%d",&a);
	if(10>a>5){
		printf("a>5\n");
	
	}
	if(a<10){
		printf("5<=a<10\n");
	}else if(a<100){
		printf("10<=a<100\n");
	}else{
	printf("a<=5或者a>=100\n");
	}


	return 0;
}
