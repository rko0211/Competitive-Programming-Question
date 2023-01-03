#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int a[3];

    for(int i=0;i<3;i++)
    cin>>a[i];

int maxval=INT_MIN;

    for(int i=0;i<3;i++)
    {
      maxval = max(maxval,a[i]);
    }
    int sum=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]==maxval)
        continue;
        else
        sum+=a[i];
    }
    if(sum==maxval)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}

    return 0;
}