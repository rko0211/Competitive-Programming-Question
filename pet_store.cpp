#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    bool flag =true;
    for(auto &it:m)
    {
        if(it.second%2!=0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

    return 0;
}
