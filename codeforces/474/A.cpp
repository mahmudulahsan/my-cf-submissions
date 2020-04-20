#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
#include<cstring>
#include<vector>

using namespace std;

int main()
{
    char c[50]="qwertyuiopasdfghjkl;zxcvbnm,./", b[150], a;

    cin>>a;
    cin>>b;

    if(a=='R'){
        for(int i=0;i<strlen(b);i++){
            for(int j=0;j<strlen(c);j++){
                if(b[i]==c[j]){
                       cout<<c[j-1];
                    }
            }
        }
    }
    else if(a=='L'){
        for(int i=0;i<strlen(b);i++){
            for(int j=0;j<strlen(c);j++){
                    if(b[i]==c[j]){
                       cout<<c[j+1];
                    }
            }
        }
    }
    return 0;
}
