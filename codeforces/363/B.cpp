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

    int n, k;
    cin>>n>>k;
    int a[n+1], b[n+1], sum = 0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
        b[i]=sum;
    }
    /*for(int i=0;i<n;i++) cout<<b[i]<<" ";
    cout<<endl;*/

    int mn = INT_MAX, x, j;

    b[0]=0;

    for(int i=1;i<=n;i++){
        if( i+k-1<=n ){
            x = b[i+k-1]-b[i-1];
            if(x<=mn){
                mn = x;
                j=i;
            }
        }
        else break;
    }

    cout<<j<<endl;



    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;


    return 0;
}
