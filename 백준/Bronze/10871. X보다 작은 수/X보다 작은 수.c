#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int *arr,n,a;
	scanf("%d %d",&n,&a);
	arr = (int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf(" %d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i] < a)
		printf("%d ",arr[i]);
	}
	return 0;
}