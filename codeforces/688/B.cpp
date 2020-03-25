#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000000], b[1000000];

    gets(a);

    printf("%s", a);

    strrev(a);

    strcpy(b,a);

    printf("%s", b);

    return 0;

}
