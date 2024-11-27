#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int cnt = 0;
        char a[1000] = {0};
        scanf("%s",a);
        for(int k=0;a[k]!='\0';k++)
        {
            cnt += 1;
        }
        printf("%c%c\n",a[0],a[cnt-1]);
    }
    return 0;
}