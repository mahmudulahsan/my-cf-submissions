#include<stdio.h>
int main()
{
    int T, m, c, count_m=0, count_c=0, i;

    scanf("%d", &T);

    for(i=1;i<=T;i++)
    {
        scanf("%d %d", &m, &c);

        if(m>c)
        {
            count_m++;
        }
        else if(c>m)
        {
            count_c++;
        }
        else
        {
            continue;
        }
    }
    if(count_c>count_m)
    {
        printf("Chris\n");
    }
    else if(count_m>count_c)
    {
        printf("Mishka\n");
    }
    else
    {
        printf("Friendship is magic!^^\n");
    }

    return 0;
}
