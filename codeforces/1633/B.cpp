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

int digit(int x){
    x = x/10;
    return x%10;
}


int main()
{
    //flash

    int t; cin>>t;

    while(t--){
        string s;
        cin>>s;
        int len = s.length();

        int z=0;
        int o = 0;

        for(int i=0;i<len;i++){
            if(s[i]=='0'){
                z++;
            }
            else{
               o++;
            }
        }

        int mn = min(z, o);

        if(z==o){
            if(z==1){
               cout<<"0"<<endl;
            }
            else{
                cout<<z-1<<endl;
            }

        }
        else{
            cout<<mn<<endl;
        }
    }




    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
