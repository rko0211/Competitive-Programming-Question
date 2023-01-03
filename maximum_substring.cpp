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
string s;
cin>>s;
s ='$'+s;
ll x=0,y=0;
for(int i=1;i<=n;++i)
{
    if(s[i]=='0')
    x++;
    if(s[i]=='1')
    y++;
}
ll ans =(x*y);
ll contval=1;
for(int i=2;i<=n;++i)
{
 if(s[i]==s[i-1])
 {
contval++;
 }
 else{
    ans =max(ans,(contval*contval));
    contval=1;
 }

}
ans= max(ans, (contval*contval));

cout<<ans<<endl;
    }
    return 0;
}