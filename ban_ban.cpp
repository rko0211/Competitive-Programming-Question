#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        while(n--)
        {
            cout<<1<<" "<<2<<endl;
        }

    }
    else
    {
        int m = (n/2)+n%2;
        cout<<m<<endl;
        int i=2;
int l=1;
int r = 3*n;
while(l<r)
{
    cout<<l<<" "<<r<<endl;
    l+=3;
    r-=3;
}
    }
}

    return 0;
}