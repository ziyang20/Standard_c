#include<stdio.h>
int main(void){
	int a[3]={0};
	int max=0;
	printf("请输入三个数：");
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<3;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("max=%d",max);
	
	return 0;



}

void selectsort(int arr[],int){


}

