#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], t[100];

    int i, count=0;

    gets(s);

    gets(t);

    strrev(t);

    for(i=0;i<strlen(t);i++)
    {
        if(s[i]==t[i])
        {
            count++;
        }
        else
        {
            continue;
        }
    }

    if(count==strlen(t))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

}
