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

    ll n; cin>>n;
    ll a[n];

    for(int i=0;i<n;i++) cin>>a[i];

    ll sum=0, c=0;

    priority_queue<ll>pq;

    for(int i=0;i<n;i++){
        sum+=a[i];
        c++;
        if(a[i]<0) pq.push(-a[i]);
        if(sum<0){
            while(sum<0){
                sum+=pq.top();
                pq.pop();
                c--;
            }
        }
    }
    cout<<c<<endl;

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
