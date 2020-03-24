#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char s[100];

    int i, count=0;

    scanf("%s", &s);

    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            printf("YES\n");
            break;
        }
        else
        {
            count++;
        }
    }
    if(count==strlen(s))
        printf("NO\n");


    return 0;

}
