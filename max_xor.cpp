#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return a>b;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
  string s1,s2;
  cin>>s1>>s2;
  vector<int>v1;
  vector<int>v2;
  for(int i=0;i<s1.size();i++)
  {
      v1.push_back(s1[i]-'0');
      v2.push_back(s2[i]-'0');
  }
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end(),cmp);
for(int i =0;i<v1.size();i++)
{
    v1[i] = (v1[i]^v2[i]);
}
for(int i =0;i<v1.size()-1;i++)
{
    if(v1[i]==0 && v1[v1.size()-1]==1)
    {
        swap(v1[i],v1[v1.size()-1]);
    }
}
for(auto &it:v1)
{
    cout<<it;
}
cout<<endl;
	}
	return 0;
}
