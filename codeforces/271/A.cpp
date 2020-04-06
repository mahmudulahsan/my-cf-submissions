#include<stdio.h>
int main()
{
    int y, a, b, c, d;

    scanf("%d", &y);

    int x=y+1;

    while(1)
    {

        a=(x)/1000;
        b=((x)/100)%10;
        c=((x)/10)%10;
        d=(x)%10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            printf("%d", x);
            break;
        }
        else
        {
            (x)++;
            continue;
        }
    }

    return 0;
}
