#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int minval = INT_MAX;
    for(int i=0;i<n;i++)
    {
     minval = min(minval,a[i]);
    }
    if(minval<=m)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

    return 0;
}