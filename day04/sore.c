#include<stdio.h>
int main(void){
	int sore=0;
	printf("请输入分数\n");
	scanf("%d",&sore);
	int a=0;
	a=sore/10;
	switch(a){
		case 10:
			printf("满分\n");
			break;
		case 9:
			printf("A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		default :
			printf("E\n");
			break;
	}

	return 0;

}
