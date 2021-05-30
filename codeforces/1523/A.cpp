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
//#define ios       ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //ios

    int t; cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;

        string a;
        cin>>a;

        string b=a;

        m = min(m, n);

        while(m--){
            if(a[0]=='0'&&a[1]=='1'){
               b[0]='1';
            }

            if(a[n-1]=='0'&&a[n-2]=='1'){
                b[n-1]='1';
            }

        for(int i=1;i<n-1;i++){

            if( a[i-1]=='1' && a[i+1]=='0' && a[i]=='0' ){
               b[i]='1';
            }

            if( a[i+1]=='1' && a[i-1]=='0' && a[i]=='0' ){
               b[i]='1';
            }
        }

        a=b;

        }
        cout<<a<<endl;
    }



    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
