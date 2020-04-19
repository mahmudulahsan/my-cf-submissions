#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int a, b, T, c=0, r;

    cin>>T;

    for(int i=1;i<=T;i++){
        cin>>a>>b;
        if(a<b){
            if((b-a)%2==0){
                cout<<"2"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }
        }
        else if(b<a){
            if((a-b)%2==0){
                cout<<"1"<<endl;
            }
            else{
                cout<<"2"<<endl;
            }
        }
        else{
            cout<<"0"<<endl;
        }
    }

    return 0;
}
