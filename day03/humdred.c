#include<stdio.h>
int main(void){

	printf("请输入1000～9999的整数：");

	int num;
	scanf("%d",&num);

	

	printf("逆序为%d\n",1000*(num%10)+10*(num%1000/100)+100*(num%100/10)+num/1000 );

	return 0;

}
