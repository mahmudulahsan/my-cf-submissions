#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];

    int i, a=0, b=0;

    scanf("%s", &s);

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='1')
        {
            a++;
            if(b>=7) 1;
            else b=0;
        }
        if(s[i]=='0')
        {
            b++;
            if(a>=7) 1;
            else a=0;
        }
    }

    if(b>=7||a>=7)
        printf("YES\n");
    else
        printf("NO\n");

        return 0;
}
