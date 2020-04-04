#include<stdio.h>
int main()
{
    long long n, k;

    scanf("%lld %lld", &n, &k);

    if(n%2==0)
    {
        if(k<=(n/2))
        {
            printf("%lld\n", 2*k-1);
        }
        else
        {
            printf("%lld\n", 2*(k-(n/2)));
        }
    }

    if(n%2!=0)
    {
        if(k<=(n+1)/2)
        {
            printf("%lld\n", 2*k-1);
        }
        else
        {
            printf("%lld\n", 2*(k-((n+1)/2)));
        }
    }
}
