#include <stdio.h>
int main()
{
    int a;
    int i = 1;
    int k = 0;
    scanf("%d", &a);
    while (i < a+1) {
        while (k < i) {
            printf("*");
            k++;
        }
        printf("\n");
        k = 0;
        i++;
    }
    return 0;
}