#include<bits/stdc++.h>
using namespace std;

#define mod       1e9+7
#define pi        acos(-1)
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b)  (a/__gcd(a,b))*b
#define ll        long long
#define pb        push_back
#define endl      '\n'
//#define ios       ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);


int main()
{
    //ios

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int a[n];

        for(int i=0;i<n;i++) cin>>a[i];


        sort(a, a+n);

        int c=0;
        int avg=INT_MAX;

        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                avg=(a[i]+a[i+1])/2;
                break;
            }
        }
        //cout<<"avg "<<avg<<endl;
        for(int i=0;i<n;i++){
            if(a[i]>avg) c++;
        }

        cout<<c<<endl;


}



    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
