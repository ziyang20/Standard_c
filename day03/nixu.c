#include<stdio.h>
int main(void){

	printf("请输入10000～99999的整数：");

	int num;
	scanf("%d",&num);

	

	printf("逆序为%d\n",10000*(num%10)+10*(num%10000/1000)+(num%1000/100)*100+num/10000+1000*(num%100/10) );

	return 0;

}
