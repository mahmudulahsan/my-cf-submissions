#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char c[5]={'h','e','l','l','o'};

    gets(s);

   int i,ch=0,cn=0,j=0,d=0;
   int ln=strlen(s);

   for ( i=0; i<5; i++ )
   {
        for ( j=d; j<ln; )
        {
            if ( c[i]==s[j])
            {
                cn++;
                j++;
            d=j;

                break;
            }
            j++;
            d=j;
        }
        j=d;
   }
   if ( cn==5) printf("YES\n");
   else printf("NO\n");

   return 0;
}
