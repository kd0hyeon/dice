#include <stdio.h>

int main(void)
{
	
	int n,a;
	scanf("%d %d",&n,&a);
	int arr[n];
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