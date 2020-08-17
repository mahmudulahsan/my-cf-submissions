#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;

    cin>>t;

    start:
    while(t--){
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])>1){
                cout<<"NO"<<endl;
                goto start;
            }
        }
        cout<<"YES"<<endl;
    }


    return 0;
}