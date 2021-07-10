#include<bits/stdc++.h>
using namespace std;

#define mod       1e9+7
#define pi        acos(-1)
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b)  (a/__gcd(a,b))*b
#define ll        long long
#define pb        push_back
#define endl      '\n'
#define yes       cout<<"YES"<<endl
#define no        cout<<"NO"<<endl
#define ios       ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //ios

    int t; cin>>t;
    while(t--){
        int xa, ya, xb, yb, xf, yf;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;
        if( xa==xb && xb==xf && ( (yf>ya && yf<yb) || (yf<ya && yf>yb) ) ){
            cout<<abs(ya-yb)+2<<endl;
        }
        else if( ya==yb && yb==yf && ( (xf>xa && xf<xb) || (xf<xa && xf>xb) ) ){
            cout<<abs(xa-xb)+2<<endl;
        }
        else{
            cout<<abs(xa-xb)+abs(ya-yb)<<endl;
        }
    }



    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;


    return 0;
}
