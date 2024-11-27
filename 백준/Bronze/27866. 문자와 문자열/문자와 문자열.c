#include <stdio.h>

int main(void)
{
    char a[1001];
    int b;
    scanf("%s",a);
    scanf("%d",&b);
    printf("%c",a[b-1]);
    return 0;
}