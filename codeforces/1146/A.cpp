#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];

    int i, c1=0, c2=0;

    gets(s);

    int len=strlen(s);

    for(i=0;i<len;i++)
    {
        if(s[i]=='a')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }

    if(c1>c2)
    {
        printf("%d\n", len);
    }

    else
    {
        printf("%d\n", len-(c2-(c1-1)));
    }
}
