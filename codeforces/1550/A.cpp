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
        int sum = 1;
        int i = 1;
        int cnt = 1;
        while(1){
            if(sum>=n) break;
            else{
                sum+=i;
                i=i+2;
                cnt++;
                if(sum>n){
                    cnt--;
                    break;
                }
                else if(sum==n){
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }


    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;


    return 0;
}
