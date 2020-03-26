#include<stdio.h>
int main()
{
    int T, n, sum_b=0, sum_c=0, i;

    int b[100], c[100];

    for(i=0;i<100;i++)
    {
        b[i]=0;
        c[i]=0;
    }

    scanf("%d", &T);

    for(i=0;i<T;i++)
    {
        scanf("%d", &n);
        if(n>=0)
        {
            b[i]=n;
        }
        else
        {
            c[i]=n;
        }
    }

    for(i=0;i<T;i++)
    {
        sum_b=sum_b+b[i];
        sum_c=sum_c+c[i];
    }

    printf("%d\n", sum_b-sum_c);

}
