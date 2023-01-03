#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
 int a[n];
  a[0]=0;
 int count=0;
 for(int i=1;i<n;i++)
 {
    if(s[i-1]!=s[i])
    {
        count++;
        a[i]=count;
    }
    else
    a[i]=count;
 }
 int ans=INT_MAX;

 for(int i=n-1;i>=0;i--)
 {
    if(i-k+1<0) break;
    int c = a[i]-a[i-k+1];
    if(s[i]=='0') c++;
    ans = min(ans,c);
 }
 cout<<ans<<endl;
   
}


    return 0;
}