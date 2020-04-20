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
    long long A, B, x, y, z, t=0;

    cin>>A>>B;
    cin>>x>>y>>z;

    if(A<(2*x+y))
        t+=((2*x+y)-A);

    if(B<(y+3*z))
        t+=((3*z+y)-B);

    cout<<t;

    return 0;


}
