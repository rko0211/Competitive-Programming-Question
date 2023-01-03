#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{

ll n;
cin>>n;
int digit_count=0;
ll x=n;
while(x)
{
  digit_count++;
  x/=10;
}
if(digit_count==1)
{
    cout<<n<<endl;
}
else
{
    ll p = pow(10,digit_count-1);
      cout<< (9*(digit_count-1) + (n/p) )<<endl;

}
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