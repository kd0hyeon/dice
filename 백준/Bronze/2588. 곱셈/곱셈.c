#include <stdio.h>

int main(void) {
	int a,temp,b,c,d;
	scanf("%d", &a);
	scanf("%d", &temp);
	b = temp / 100;
	temp = temp - (100 * b);
	c = temp / 10;
	d = temp % 10;
	printf("%d\n%d\n%d\n%d", a*d, a*c, a*b,a*(temp+100*b));
	
	return 0;
}