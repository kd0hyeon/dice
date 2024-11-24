#include <stdio.h>
#include <string.h>

int main(void)
{
	char c1[60];
	scanf("%s",c1);
	strcat(c1,"??!");
	printf("%s",c1);
	return 0;
}