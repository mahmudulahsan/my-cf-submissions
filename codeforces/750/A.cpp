#include<stdio.h>
#include<string.h>
int main()
{
    int n, k, i=1, sum=0;

    scanf("%d %d", &n, &k);

    while(1)
    {
        sum=sum+5*i;
        if(sum>240-k)
        {
            break;
        }

        else
        {
            i++;
            continue;
        }

    }

    if(n>=i)
    {
        printf("%d",i-1);
    }
    else
    {
        printf("%d",n);
    }




}
