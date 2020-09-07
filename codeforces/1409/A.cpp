#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, t, d, r;

    cin>>t;

    while(t--){
        mahi:
        cin>>a>>b;

        long long c=0;

        if(a<b){
            d=(b-a)/10;
            r=(b-a)%10;
            if(r==0){
                cout<<d<<endl;
            }
            else{
                cout<<d+1<<endl;
            }
        }
        else if(a>b){
            d=(a-b)/10;
            r=(a-b)%10;
            if(r==0){
                cout<<d<<endl;
            }
            else{
                cout<<d+1<<endl;
            }
        }
        else{
            cout<<"0"<<endl;
        }
    }

    return 0;
}
