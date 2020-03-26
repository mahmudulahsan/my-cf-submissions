#include<stdio.h>
int main()
{
    int T, c=0, d=0, i, max, min;

    scanf("%d", &T);

    int mahi[T];

    for(i=0;i<T;i++)
    {
        scanf("%d", &mahi[i]);
    }
    max=mahi[0];
    for(i=1;i<T;i++)
    {
        if(max<mahi[i])
        {

            c++;
            max=mahi[i];
        }
        else
            continue;
    }

    min=mahi[0];
    for(i=1;i<T;i++)
    {
        if(min>mahi[i])
        {

            d++;
            min=mahi[i];
        }
        else
            continue;
    }


    printf("%d\n", c+d);
}
