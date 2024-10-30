#include <stdio.h>

int main(void)
{
	int i;
	int n;
	scanf("%d",&n);
	for (i=1;i<n+1;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		printf("Case #%d: %d\n",i,a+b);
	}
	return 0;
}