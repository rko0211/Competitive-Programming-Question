#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,s;
cin>>n>>s;
int arr[n];
set<int>st;
for(int i=0;i<n;i++)
{cin>>arr[i];
 st.insert(arr[i]);
}

int maxi = INT_MIN;
for(int i =0;i<n;i++)
{
    maxi = max(arr[i],maxi);
}
int num=1;
int sum=0;
while(num)
{
    if(st.find(num)!=st.end())
    {
        num++;
        continue;
    }
    sum+=num;
    if(sum>s)
    {
        cout<<"NO\n";
        break;
    }
    st.insert(num);
    if(sum==s)
    {
     int tem =0;
     for(int j=1;j<=maxi;j++)
     {
        if(st.find(j)!=st.end())
        {
            continue;
        }
        tem =1;
        break;
     }
     if(!tem) cout<<"YES\n";
     else cout<<"NO\n";
     break;;
    }
    num++;

}

}

    return 0;
}