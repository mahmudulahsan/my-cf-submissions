#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
#include<cstring>
#include<vector>

using namespace std;

int main()
{
    int T, sum=0, i, n, x;

    cin>>T;

    for(i=1;i<=T;i++){

        cin>>n;

        sum=0;

        for(int x=1;;x=x*2)
        {
            sum=sum+x;

            if(n%sum==0&&x>1){
            x=n/sum;
            cout<<x<<endl;
            break;
            }
            else continue;
        }
    }

    return 0;
}

