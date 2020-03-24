#include<stdio.h>
int main()
{
    unsigned long long int T, a, b, c, n, i, A, B, C;

    scanf("%llu", &T);

    for(i=1;i<=T;i++)
    {
        scanf("%llu %llu %llu %llu", &a, &b, &c, &n);

        A=(n-2*a+b+c)/3;
        B=(n-2*b+a+c)/3;
        C=(n-2*c+b+a)/3;

        if((A+B+C)==n)
        {
            printf("YES\n");
        }
        else if((A+B+C)!=n)
        {
            printf("NO\n");

        }
    }

    return 0;
}
