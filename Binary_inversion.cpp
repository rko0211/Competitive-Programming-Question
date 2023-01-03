#include<bits/stdc++.h>
using namespace std;
using ll =long long ;
ll inversion_count(vector<int>a)
{
    ll ans=0;ll zeros=0;
    // How to count number of zeros after 1
    for(int i=a.size()-1;i>=0;i--)
    {
        if(a[i]==0) zeros++;
        else ans+=zeros;
    }
    return ans;
}
void solve()
{
    int n;
    cin>>n;
   vector<int>b;
    for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    b.push_back(x);
  }
 ll ans= inversion_count(b);
for(int i=0;i<n;i++)
{
    if(b[i]==0)
    {
        b[i]=1;
        ans =max(ans,inversion_count(b));
        b[i]=0;
        break;
    }

}
for(int i=n-1;i>=0;i--)
{
    if(b[i]==1)
    {
        b[i]=0;
        ans =max(ans,inversion_count(b));
        b[i]=1;
        break;
    }

}
cout<<ans<<endl;

}
int main()
{
int t;
cin>>t;
while(t--)
{
    solve();
}

    return 0;
}