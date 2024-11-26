#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int *arr,n,a,sum = 0;
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf(" %d",&arr[i]);
	}
	scanf("%d",&a);
	for(int i=0;i<n;i++)
	{
		if(arr[i] == a)
		sum += 1;
	}
	printf("%d",sum);
	return 0;
}
