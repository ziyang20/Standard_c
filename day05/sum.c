#include<stdio.h>

int sum(int a){
	if(a==1){
		return 1;
	}
	
	return sum(a-1)+a;
}

int main(void){
	int n;
	n=100;
	printf("%d",sum(n));

	return 0;


}
