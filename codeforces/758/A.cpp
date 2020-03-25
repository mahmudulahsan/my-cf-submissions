#include<stdio.h>
#include <stdlib.h>
int main()
{
    int T, i, money=0, max;

    scanf("%d", &T);

    int a[T];

    for(i=0;i<T;i++)
    {
        scanf("%d", &a[i]);
    }

    max=a[0];

    for(i=1;i<T;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else
        {
            continue;
        }

    }

    //printf("%d\n", max);

    for(i=0;i<T;i++)
    {
        if(a[i]<max)
        {
            money=money+max-a[i];
        }
        else
        {
            continue;
        }
    }

    printf("%d", money);


    return 0;
}
