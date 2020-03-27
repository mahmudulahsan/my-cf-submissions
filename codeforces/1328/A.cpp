#include<stdio.h>
int main()
{
    int a, b, T, c, i;

    scanf("%d", &T);

    for(i=1;i<=T;i++)
    {
        scanf("%d %d", &a, &b);

        if(a%b==0)
        {
            printf("0\n");
        }
        else
        {
            c=a%b;
            printf("%d\n", b-c);
        }
    }

    return 0;


}
