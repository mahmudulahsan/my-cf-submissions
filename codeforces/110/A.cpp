#include<stdio.h>
#include<string.h>
int main()
{
    char a[18];

    gets(a);

    int c=0, i;

    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='4'||a[i]=='7')
        {
            c++;
        }
    }

    if(c==7||c==4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;


}
