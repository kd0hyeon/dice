#include <stdio.h>

int main(void)
{
    int n,a,temp1,temp2,temp3;
    scanf("%d %d",&n,&a);
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i] = 0;
    }

    for(int i=0;i<a;i++)
    {
        scanf("%d %d %d",&temp1,&temp2,&temp3);
        for(int k=temp1;k<=temp2;k++)
        {
           b[k-1] = temp3;
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}