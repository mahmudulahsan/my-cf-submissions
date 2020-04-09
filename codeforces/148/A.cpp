#include<iostream>
using namespace std;

int main()
{
    int k, l, m, n, d, i, c=0;

    cin>>k>>l>>m>>n>>d;

    for(i=1;i<=d;i++)
    {
        if(i%k==0)
        {
            c++;
        }
        else if(i%l==0)
        {
            c++;
        }
        else if(i%m==0)
        {
            c++;
        }
        else if(i%n==0)
        {
            c++;
        }
    }

    cout<<c<<endl;


}
