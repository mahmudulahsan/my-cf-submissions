#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,i,sum1=1,sum2=1;

    cin>>a>>b;

    if(a>b){
        for (i=1; i<=b; i++)
    {
        sum1=sum1*i;
    }
    cout<<sum1<<endl;
    }
    else if(b>a){
        for (i=1; i<=a; i++)
    {
        sum2=sum2*i;
    }
    cout<<sum2<<endl;
    }

    else{
            for (i=1; i<=a; i++)
    {
        sum2=sum2*i;
    }
    cout<<sum2<<endl;

    }


    return 0;

}

