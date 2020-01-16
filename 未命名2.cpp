#include <stdio.h>
#include <stdlib.h>
// 使用循环实现二分查找
int binary_find(int arr[],size_t len,int key)
{
	int left=0;
	int right=len;
	while(left < right)
	{
		int p=(left + right)/2;
		if(arr[p]==key)	return p;
		if(arr[p]>key)
		right=p;
		else
		left=p+1; 
	}
	return -1;
}
int main()
{
	int arr[10]={};
	for(int i=0;i<10;i++)
	{
		arr[i]=i+10;
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("%d\n",binary_find(arr,10,17));
}
