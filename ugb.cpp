#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n ;
    cin>>n;
    string s;
    cin>>s;
    // Based on constructive algorithm
int ans =0;
bool flag =0;
 for(int i=1;i<n;i++)
 {
  if(s[i]!=s[i-1])
  {
    if(flag==0 && s[i]=='0')
    {
        flag =1;
        ans++;
    }
    else if(flag==1)
    ans++;
  }
 }
 cout<<ans<<endl;
  

}

    return 0;
}