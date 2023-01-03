#include<bits/stdc++.h>
using namespace std;
#define ll long int
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
ll res =1;
for(int i=2;i*i<=n;i++)
{
    if(n%i==0)
  {  res=n/i;break;}
}
cout<<res<<" "<<(n-res)<<endl;

}

    return 0;
}