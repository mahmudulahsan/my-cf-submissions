#include<bits/stdc++.h>

using namespace std;

int main()
{
    char c[205];

    cin>>c;

    int len=strlen(c);

    //cout<<len<<endl;

    for(int i=0;i<len;++i){
        if(c[i]=='.'){
            cout<<"0";
        }
        else if(c[i]=='-'&&c[i+1]=='.'){
            cout<<"1";
            i++;
        }
        else if(c[i]=='-'&&c[i+1]=='-'){
            cout<<"2";
            i++;
        }
    }

    return 0;
}
