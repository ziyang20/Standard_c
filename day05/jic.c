#include<stdio.h>

long long fact(int n){

	if(n==1)
		return 1;
	return fact(n-1)*n;

}
int main(void){

	printf("%lld",fact(50));


	return 0;
}
