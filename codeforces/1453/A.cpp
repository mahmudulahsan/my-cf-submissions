#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m;

    cin>>t;

    while(t--){
        cin>>n>>m;

        int a[n], b[m];
        int c=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]==b[j]){
                    c++;
                }
            }
        }
        cout<<c<<endl;
        c=0;
    }


    return 0;
}
