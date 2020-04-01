#include<stdio.h>
int main()
{
    int n, sum=0, t=0, c=0, d=0;

    scanf("%d", &n);

    int i=1;

    while(t<=n)
    {
        sum=sum+i;
        t=t+sum;
        c++;
        i++;
    }

    printf("%d\n", c-1);
}
