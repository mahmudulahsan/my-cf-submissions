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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int len = s.length();

        int one = 0, zero = 0;


        if(len>=3)
            cout<<"NO"<<endl;
        else{
            if(len==2){
                if(s[0]!=s[1])
                    cout<<"YES"<<endl;
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"YES"<<endl;
            }
        }



    }


    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
