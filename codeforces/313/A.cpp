#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int n1;

    cin>>n1;

    if(n1>=0){
        cout<<n1<<endl;
    }
    else{
            int n=n1*(-1);

    int ans1=n/10;

    int d=n-(n/10)*10;

    int ans2=(n/100)*10+d;

    if(ans1<ans2){
        cout<<-1*ans1<<endl;
    }
    else{
        cout<<-1*ans2<<endl;
    }

    }

    return 0;
}
