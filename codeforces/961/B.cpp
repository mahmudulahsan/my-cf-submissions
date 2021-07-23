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

    int n, k; cin>>n>>k;
    int a[n+1], b[n+1];
    int c[n+1], d[n+1];

    int s1=0, s2=0;

    //theorem arr
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s1+=a[i];
        c[i]=s1;
    }

    //behaviour arr
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    for(int i=1;i<=n;i++){
        if(b[i]==1) b[i]=a[i];
        else b[i]=0;
    }
    for(int i=1;i<=n;i++){
        s2+=b[i];
        d[i]=s2;
    }
    

    int mx = INT_MIN;

    c[0]=0;
    d[0]=0;

    int tmp1, tmp2, ind;

    for(int i=1;i<=n-(k-1);i++){
        tmp1 = abs(c[i+k-1]-c[i-1]);
        tmp2 = abs(d[i+k-1]-d[i-1]);
        if(abs(tmp1-tmp2)>=mx){
            mx = abs(tmp1-tmp2);
            ind = i;
        }
    }

    int ans = 0;

    for(int i=ind;i<=ind+k-1;i++) b[i] = a[i];

    for(int i=1;i<=n;i++) ans+=b[i];

    cout<<ans<<endl;



    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;


    return 0;
}

