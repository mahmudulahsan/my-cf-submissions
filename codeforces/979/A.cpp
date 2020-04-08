#include<stdio.h>
int main()
{
    long long int n;

    scanf("%lld", &n);

    if((n+1)%2==0)
    {
        printf("%lld\n", (n+1)/2);
    }
    else if((n+1)==1)
    {
        printf("0\n");
    }
    else
    {
        printf("%lld\n", n+1);
    }

    return 0;
}
