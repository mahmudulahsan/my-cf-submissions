#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];

    gets(a);

    int len=strlen(a);

    int i;

        if(a[len-1]%2==0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }



}
