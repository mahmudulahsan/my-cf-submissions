#include<stdio.h>
int main()
{
    int T, c=0;

    scanf("%d", &T);

    int m[T], i;

    for(i=0;i<T;i++)
    {
        scanf("%d", &m[i]);
    }

    for(i=0;i<T-1;i++)
    {
        if(m[i]==m[i+1])
        {
            continue;
        }
        else
            c++;
    }

    printf("%d\n", c+1);


}
