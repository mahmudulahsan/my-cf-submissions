#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int n;

    cin>>n;

    if(n%2==0){
        cout<<8<<" "<<n-8<<endl;
    }
    else{
        cout<<"9"<<" "<<n-9<<endl;
    }

    return 0;
}
