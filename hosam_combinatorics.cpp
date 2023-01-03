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
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int minval=INT_MAX;
int maxval = INT_MIN;
for(int i =0;i<n;i++)
{
    minval = min(minval,a[i]);
    maxval = max(maxval,a[i]);
}
int minvalcount=0;
int maxvalcount=0;
for(int i=0;i<n;i++)
{
    if(minval==a[i])
    minvalcount++;
    if(maxval==a[i])
    maxvalcount++;
}
if(maxval==minval)
{
    cout<<(n*1LL*(n-1))<<endl;
}
else
{
    ll ans =0;
    while(minvalcount>0)
    {
      ans += (2*maxvalcount);
      minvalcount--;
    }
    cout<<ans<<endl;
}
}

    return 0;
}