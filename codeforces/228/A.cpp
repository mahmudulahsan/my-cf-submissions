#include<stdio.h>
int main()
{
    int a[5],j,i,k=0;

    for(i=0;i<4;i++)
    {
        scanf("%d", &a[i]);
        for(j=0;j<i;j++)
        {
        if(a[i]==a[j])
        {
            k++;
            break;
        }
        }
    }
    printf("%d\n", k);
}

