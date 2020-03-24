#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int T, i, count_a=0, count_b=0;

    scanf("%d", &T);

    char s[100000];

    scanf("%s", &s);

    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]=='A')
        {
            count_a++;
        }
        else if(s[i]=='D')
        {
            count_b++;
        }
    }
    if(count_a>count_b)
    {
        printf("Anton\n");
    }
    else if(count_b>count_a)
    {
        printf("Danik\n");
    }
    else
    {
        printf("Friendship\n");
    }

    return 0;

}
