#include<bits/stdc++.h>
using namespace std;

#define mod       1e9+7
#define pi        acos(-1)
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b)  (a/__gcd(a,b))*b
#define ll        long long
#define pb        push_back
#define m_p       make_pair
#define endl      '\n'
#define yes       cout<<"YES"<<endl
#define no        cout<<"NO"<<endl
#define gap       " "
#define flash     ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define SP(x,y)   setprecision((y))<<fixed<<(x)


int main()
{
    //flash
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        int i = 1;
        int cnt = 0;

        while(1){
            if(i%3!=0 && i%10!=3){
                cnt++;
            }
            if(cnt==n){
                cout<<i<<endl;
                break;
            }
            i++;
        }
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
