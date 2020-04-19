#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;

int main()
{
    long long T, a, b, k, sum;

    cin>>T;

    for(int i=0;i<T;i++){
        cin>>a>>b>>k;
        sum=0;
        if(k==1){
            cout<<a<<endl;
        }
        else if(k%2==0){
            for(int j=1;j<=k/2;j++){
                sum=sum+a-b;
            }
            cout<<sum<<endl;
        }
        else{
            for(int j=1;j<=(k-1)/2;j++){
                sum=sum+a-b;
            }
            cout<<sum+a<<endl;
        }

    }

    return 0;
}
