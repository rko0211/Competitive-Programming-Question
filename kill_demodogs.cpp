#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define m 1000000007
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    ll n;
    cin>>n;
ll ans;
ll x;
if(n%2==0)
{
    x=n/2;
}
else{
    x =n/2+1;
}
ll s1 = (((x*1LL*(x+1))/2))%m;
ll tx = x+((n-1)*1LL*x);
ll s2 = (((((x+tx)*1LL*n)/2)-x))%m;
ll ty = tx + ((n-x)*1LL*n);
ll s3 =(((((tx+ty)*1LL*(n-x+1))/2)-tx))%m;
ans =((2022*s1)%m+(s2*2022)%m+(s3*2022)%m)%m;
cout<<ans<<endl;
 }


    return 0;
}