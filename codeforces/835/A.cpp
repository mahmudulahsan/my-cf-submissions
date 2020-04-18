#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int s, v1, v2, t1, t2;

    scanf("%d %d %d %d %d", &s, &v1, &v2, &t1, &t2);

    int x=v1*s+2*t1;

    int y=v2*s+2*t2;

    if(x<y)
    {
        printf("First\n");
    }
    else if(y<x)
    {
        printf("Second\n");
    }
    else
    {
        printf("Friendship\n");
    }

}
