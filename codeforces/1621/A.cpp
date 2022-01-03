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
#define SP(x,y)   setprecision((y))<<fixed<<(x)

#define flash     ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);


int main()
{
    //flash

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int m = ceil((float)n/2);

        int a[n][n];

        if(k>m) cout<<"-1"<<endl;
        else{
            int cnt = 1;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j && i%2==0 &cnt<=k){
                        cout<<"R";
                        cnt++;
                    }
                    else{
                        cout<<".";
                    }
                }
                cout<<endl;
            }
        }


    }


    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
