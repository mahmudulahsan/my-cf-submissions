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

int main()
{
    //flash

    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        string a, b;

        cin>>a>>b;

        int cnt = 0;

        for(int i=0;i<n;i++){
            if(a[i]=='0' && b[i]=='1'){
                a[i]='2';
                b[i]='0';
                cnt++;
            }
        }

        int m=0;

        for(int i=0;i<n;i++){
            if(b[i]=='1' && a[i-1]=='1' && i!=0){
                a[i-1]='3';
                b[i]='0';
                //cout<<"one"<<gap<<i<<endl;
                cnt++;
            }
            else if( b[i]=='1' && a[i+1]=='1' && i!=n-1 ){
                a[i+1]='3';
                b[i]='0';
                //cout<<"tow"<<gap<<i<<endl;
                cnt++;
            }

        }

        cout<<cnt<<endl;
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
