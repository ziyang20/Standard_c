#include<stdio.h>
int main(){

	int a=10;
	int *pa=&a;
	int *fa;
	printf("%d",*(pa++));
	printf("%d\n",*fa);
	return 0;
}
