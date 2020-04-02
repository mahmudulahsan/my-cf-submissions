#include<stdio.h>
int main()
{
    int T, i, c=0, sum=0;

    scanf("%d", &T);

    int a[T];

    for(i=0;i<T;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<T;i++)
    {
        if(a[i]>0)
            sum+=a[i];
        else if(sum>0&&a[i]<0)
            sum--;
        else
            c++;
    }

    printf("%d\n", c);

    return 0;
}
