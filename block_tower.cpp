#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    ll x =a[0];
    sort(a+1,a+n);
    for(int i=1;i<n;i++)
    {
        if(x>=a[i])
        continue;
        else
        {
            // x<a[i]
            x+=((a[i]-x+1)/2);
        }
    }
    cout<<x<<endl;
}


    return 0;
}