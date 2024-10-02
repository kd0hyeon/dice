#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int i = 1;
    while (i <= a) {
        int k = 0;
        while (k < a-i) {
            printf(" ");
            k++;
        }
        int j = 0;
        while (j < i) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}