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

    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int len = s.length();

        int ind = -1;

        for(int i=0;i<len;i++){
            if(s[i]=='a'){
                ind = i;
                break;
            }
        }



        if(ind==-1) no;
        else{
            int i=ind-1, j=ind+1;
            int na = 0;
            char fnd = 'b';

            while(i>=0 || j<len){
               //if(i<0 || j>len-1) break;
               if(s[i]==fnd){
                    fnd++;
                    i--;
               }
               else if(s[j]==fnd){
                    fnd++;
                    j++;
               }
               else{
                    na = 1;
                    break;
               }
            }

            if(na==1) no;
            else yes;
        }

    }



    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;


    return 0;
}
