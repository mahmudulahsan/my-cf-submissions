#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ar[15]={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    int a, b, c=0, mahi;

    set<int>s;
    set<int>::iterator it;

    cin>>a>>b;

    for(int i=0;i<15;i++){
        if(ar[i]>a){
            mahi=ar[i]-a;
            s.insert(mahi);

        }
        else{
            c++;
            continue;
        }
    }

    it=s.begin();

    int r=*it;

    if(r==b-a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0 ;
}
