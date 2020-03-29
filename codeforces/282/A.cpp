#include <stdio.h>

int main()
{
     int c=0, T, i;

     char mahi[5];

     scanf("%d",&T);

     for(i=1;i<=T;i++)
     {
         scanf("%s",mahi);

         if(mahi[0]=='X' && mahi[1]=='+')
         {
            c++;
         }
         else if(mahi[0]=='X' && mahi[1]=='-')
         {
            c--;
         }
         else if(mahi[0]=='+' )
         {
            ++c;
         }
         else if(mahi[0]=='-' )
         {
            --c;
         }
     }

    printf("%d",c);

    return 0;
}
