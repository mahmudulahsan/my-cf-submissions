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

    int r, x, y, e, f, d;

    while(t--){
        int n; cin>>n;
        if(n%7==0){
            cout<<n<<endl;
        }
        else{
            r = n%7;
            y = n-r;
            x = y+7;
            e = digit(x);
            f = digit(y);
            d = digit(n);
            if(e==d && x%7==0){
                cout<<x<<endl;
            }
            else{
                cout<<y<<endl;
            }
        }
    }




    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
