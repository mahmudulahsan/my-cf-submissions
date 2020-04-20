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
    char a[200];

    scanf("%s", &a);

    for(int i=0;i<strlen(a);i++){
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B'){
            a[i]=' ';
            a[i+1]=' ';
            a[i+2]=' ';
        }
        else{
            printf("%c", a[i]);
        }
    }

    return 0;
}
