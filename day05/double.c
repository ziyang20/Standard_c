//双色球
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define len 7
int isExists(int *p,int num);

int main(){
	int arr[len]={0},red,blue,i=0;
	srand( time(0));//刷新随机数种子 
	while(arr[len-2]==0){//确保最后一个红球不为零，退出循环 
		red = (rand()%33+1);
		printf("%d\n",red);
		if(isExists(arr,red))//数组中存在该数，重新刷新随机数 
			continue;
		else
			arr[i]=red;i++;
		//数组中不存在该数则添加到该数中 
	}
	blue = rand()%16+1;
	arr[len-1] = blue; //生成蓝球并添加 
	printf("红球："); //输出结果 
	for(i=0;i<len-1;i++)
		printf("%d  ",arr[i]);
	printf("蓝球：%d\n",arr[len-1]) ; 
	return 0;
}            
int isExists(int *p,int num){
	for(int i=0;i<len-1;i++)
		if(p[i]==num)//判断数组中是否含有num有返回1，无返回0. 
			return 1;
	return 0;
}               
