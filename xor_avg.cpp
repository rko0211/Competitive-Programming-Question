#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    if(n%2==1)
    {
    for(int i=1;i<=n;++i)
    {
        cout<<"7 ";
    }
    }
  else
  {
cout<<"1 3 ";
for(int i=2;i<n;i++)
cout<<"2 ";
  }
  cout<<endl;
}

    return 0;
}