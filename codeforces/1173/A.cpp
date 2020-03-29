#include <stdio.h>

int main()
{
    int u,d,n,c;
    scanf("%d %d %d",&u,&d,&n);

    c=u-d;

    if(c>0 && n<c )
    {
        printf("+");
    }
    else if(c<0 && n<(-1*c))
    {
        printf("-");
    }
    else if(c==0 && n==0)
    {
        printf("0");
    }
    else
    {
        printf("?");
    }

    return 0;
}

