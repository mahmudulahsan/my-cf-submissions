#include<stdio.h>
int main()
{
    int T,n;

    scanf("%d", &T);

    int i;

    for(i=1;i<=T;i++)
    {
        scanf("%d", &n);

        if(n%3==0||n%7==3||n%7==0||n>=12)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }


    }
}
