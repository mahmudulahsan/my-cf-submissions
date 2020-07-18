#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t, r, ans, x, y, n;

    cin>>t;

    while(t--){
        cin>>x>>y>>n;

        r=floor((n-y)/x);
        ans=r*x+y;

        cout<<ans<<endl;
    }

    return 0;
}
