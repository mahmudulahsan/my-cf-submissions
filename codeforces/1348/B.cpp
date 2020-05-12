//Assalamualaikum
//Mahmudul Ahsan Mahi
//RUET CSE 19'

#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<vector>
#include<list>
#include<stack>
#include<map>
#include<set>
#include<utility>
#include<iterator>
#include<algorithm>
#include<cstdlib>


#define ios ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
#define ull unsigned long long
#define pi acos(-1)
#define pb push_back

using namespace std;

int main()
{
    ios

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        int a[n];

        set<int>s;

        for(int i=0;i<n;++i){
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()>k){
            cout<<-1<<endl;
        }
        else{
            set<int>::iterator it;
            vector<int>vec;

            for(it=s.begin();it!=s.end();++it){
                vec.pb(*it);
            }
            while(vec.size()<k){
                vec.pb(1);
            }

            int j=0;
            cout<<10000<<endl;

            for(int i=0;i<10000;++i){
                cout<<vec[j]<<" ";
                j++;
                if(j==k){
                    j=0;
                }
            }
            cout<<endl;
        }
    }


    return 0;
}
