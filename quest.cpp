#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool cmp(int a, int b)
{
    return a>b;
}
void solve()
{
   ll n,c;
    ll d;
    cin>>n>>c>>d;
   ll a[n];
  
    ll sum=0;
    ll k;
    for(int i=0;i<n;i++)
   { 
    cin>>a[i];
  
   }
sort(a,a+n,cmp);
// Impossible case when k=0;

// Kth day


int l = 0, r = d + 2;
	while (l < r) {
		int m = l + (r - l + 1) / 2;
		long long tot = 0;
		int curr = 0;
		for (int i = 0; i < d; i++) {
			if (i % m < n) {tot += a[i % m];}
		}
		if (tot >= c) {
			l = m;
		}
		else {
			r = m - 1;
		}
	}
  if (l == d + 2) {cout << "Infinity\n"; return;}
	if (l == 0) {cout << "Impossible\n"; return;}
	cout << l - 1 << '\n';
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