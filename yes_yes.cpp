#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
              string s;
        cin>>s;
string str="";
int idx;
 for(int i=0;i<20;i++)
    str+="Yes";
    
    if((idx=str.find(s,0))== string::npos)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
}