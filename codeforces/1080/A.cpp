#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main()
{
    int n, k, r, g, b;

    cin>>n>>k;

    if((2*n)%k==0){
        r=(2*n)/k;
    }
    if((2*n)%k!=0){
        r=((2*n)/k)+1;
    }

    if((5*n)%k==0){
        g=(5*n)/k;
    }
    if((5*n)%k!=0){
        g=((5*n)/k)+1;
    }

    if((8*n)%k==0){
        b=(8*n)/k;
    }
    if((8*n)%k!=0){
        b=((8*n)/k)+1;
    }

    cout<<r+g+b<<endl;
    return 0;
}
