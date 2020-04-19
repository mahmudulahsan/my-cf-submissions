#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int T, i, a, t, j, sum, odd, even;

    cin>>T;

    for(i=1;i<=T;i++)
    {
        sum=0;
        odd=0;
        even=0;
        cin>>t;
        for(j=1;j<=t;j++)
        {
            cin>>a;
            if(a%2!=0){
                odd++;
            }
            else{
                even++;
            }

            sum=sum+a;
        }
        if(sum%2!=0){
        cout<<"YES"<<endl;
    }
    else{
        if(odd!=0&&even!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }


    return 0;
}
