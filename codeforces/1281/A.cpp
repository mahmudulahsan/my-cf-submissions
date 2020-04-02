#include <stdio.h>
#include <string.h>
int main()

{
    int t,i,j,l;
    char a[1005];
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%s",a);

        l=strlen(a);

        for(j=l-1;j>l-5;j--)
        {
            if(a[l-1]=='o' && a[l-2]=='p')
            {
                printf("FILIPINO\n");
                break;
            }

            else if(a[l-1]=='u' && a[l-2]=='s' && a[l-3]=='e' && a[l-4]=='d')
            {
                printf("JAPANESE\n");
                break;
            }

            else if(a[l-1]=='u' && a[l-2]=='s' && a[l-3]=='a' && a[l-4]=='m')
            {
                printf("JAPANESE\n");
                break;
            }

            else if(a[l-1]=='a' && a[l-2]=='d' && a[l-3]=='i' && a[l-4]=='n' && a[l-5]=='m')
            {
                printf("KOREAN\n");
                break;
            }

        }
    }

    return 0;
}
