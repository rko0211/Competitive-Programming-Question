#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    string s;
    cin>>s;
  string ans="NO";
  unordered_map<string ,ll>m;
  string s1;
  for(int i=0;i<n-1;i++)
  {
    s1=s[i];
    s1+=s[i+1];
    if(m.find(s1)==m.end())
    {
        m[s1]=i;
    }
    else
    {
        if(m[s1]!=i-1)
        {
            ans="YES";
            break;
        }
    }
  }
    cout<<ans<<endl;
}


    return 0;
}