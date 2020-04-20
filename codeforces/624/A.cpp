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
    double d, L, v1, v2;

    cin>>d>>L>>v1>>v2;

    double t=(L-d)/(v1+v2);

    printf("%.15lf\n", t);

    return 0;


}