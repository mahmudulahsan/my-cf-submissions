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
    string s;
    cin >> s;
 
    int n = s.length();
    vector<int> ones(n+1);
    vector<int> zeros(n+1);
 
    int c0 = 0 , c1 = 0;
    for(int i = 0;i<n;i++){
        if( s[i]=='0' )
            c0++;
        else
            c1++;
        ones[i+1] = c1;
        zeros[i+1] = c0;
    }
 
    int mn = INT_MAX;
    
    for(int i=1;i<=n;i++){
        int tans1 = zeros[i]+ones[n]-ones[i];
        int tans2 = ones[i]+zeros[n]-zeros[i];
        
        mn = min(min(tans1,tans2),mn);
        
        if( mn==0 )
            break;
        }
        cout<<mn<<endl;
    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
