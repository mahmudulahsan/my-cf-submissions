//Assalamualaikum//
//Mahmudul Ahsan Mahi RUET CSE 19'


#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
#include<cstring>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
#include<cstdlib>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll a,b, c,d,n;
        cin>>n>>a>>b>>c>>d;

        if(n*(a-b)<=c+d && n*(a+b)>=c-d)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }


    return 0;
}

