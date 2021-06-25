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
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }

        if(n%2==0){
            for(int i=0;i<n;i+=2){
                swap(a[i], a[i+1]);
            }
        }
        else{
            for(int i=0;i<n-1;i+=2){
                swap(a[i], a[i+1]);
            }
            swap(a[n-1], a[n-2]);
        }

        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;



    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;


    return 0;
}
