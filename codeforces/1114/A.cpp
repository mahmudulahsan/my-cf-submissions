#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int x, y, z, a, b, c;

    cin>>x>>y>>z>>a>>b>>c;

    if(x<=a&&y<=a+b-x&&z<=a+b+c-x-y){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
