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

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
        }
        sort(a, a+n*2);


            int x=0;
            int y=2*n-1;

            while(1){
                cout<<a[x]<<" ";
                cout<<a[y]<<" ";
                x++;
                y--;
                if(x>y) break;
            }
            cout<<endl;



    }

    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;

    return 0;
}
