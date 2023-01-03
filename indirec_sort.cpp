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
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int minval=INT_MAX;
    for(int i=0;i<n;i++)
    {
        minval=min(minval,a[i]);
    }

    if(a[0]==minval)
    {
        cout<<"Yes\n";
    }
    else cout<<"No\n";
}

    return 0;
}