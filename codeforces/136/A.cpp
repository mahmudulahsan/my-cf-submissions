#include<stdio.h>
int main()
{
    int T, i, j;

    scanf("%d", &T);

    int a[T], n[T];

    for(i=0;i<T;i++)
    {
        scanf("%d", &a[i]);
    }
    for(j=1;j<=T;j++)
    {
        for(i=0;i<T;i++)
        {
            if(j==a[i])
            {
                printf("%d ", i+1);
                break;
            }
            else
            {
                continue;
            }
        }
    }

    return 0;
}
