#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,c=0,m=0, r,mahi=1;

    cin>>t;

    int n;

    vector<int>s;
    vector<int>::iterator it;

    while(t--){
        cin>>n;
        int count = (n == 0) ? 1  : (log10(n) + 1);
        for(int i=0;i<count;i++){
            r=n%10;

            if(r!=0){
                c++;
                s.push_back(r*mahi);
            }
            else{
                m++;
            }
            n=n/10;
            mahi=mahi*10;
        }
        cout<<c<<endl;


        for(it=s.begin();it!=s.end();++it){
            cout<<*it<<" ";
        }
        s.clear();


        mahi=1;
        m=0;
        c=0;
    }


}
