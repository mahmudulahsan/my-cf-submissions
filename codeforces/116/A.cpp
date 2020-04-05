#include<stdio.h>
int main()
{
    int n, a, b, c, i, j=0, r=0, max;

    scanf("%d", &n);

    int m[n];

    scanf("%d %d", &a, &b);

    c=-a+b+r;

    r=c;

    max=r;

    for(i=1;i<=n-1;i++)
    {
        scanf("%d %d", &a, &b);

        c=-a+b+r;

        r=c;

        if(r>max)
        {
            max=r;
        }
        else
        {
            continue;
        }
    }

    printf("%d", max);


}
