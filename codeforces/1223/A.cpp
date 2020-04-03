#include<stdio.h>
int main()
{
    int T, n, i;

    scanf("%d", &T);

    for(i=1;i<=T;i++)
    {
        scanf("%d", &n);

        if(n<4)
        {
            printf("%d\n", 4-n);
        }
        if(n%2==0&&n>=4)
        {
            printf("0\n");
        }
        if(n%2!=0&&n>4)
        {
            printf("1\n");
        }
    }

    return 0;
}
