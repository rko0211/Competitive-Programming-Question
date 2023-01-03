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
vector<int>v;
for(int i =0;i<n;i++)
{
    int x;
    cin>>x;
    if(i==0||x!=v.back())
    {
v.push_back(x);
    }
}
int num_vally=0;
for(int i=0;i<v.size();i++)
{
   if((i==0 || v[i-1]>v[i]) && (i==v.size()-1 || v[i]<v[i+1]))
   {
    num_vally++;
   }
}
if(num_vally==1)
cout<<"YES\n";
else
cout<<"NO\n";
}


    return 0;
}