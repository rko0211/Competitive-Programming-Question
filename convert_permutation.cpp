#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    int b[n];
	    for(int i =0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    set<int>s;
	    for(int i=0;i<n;i++)
	    {
	        s.insert(a[i]);
	    }
	    if(s.size()<k)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	    map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	        m.insert({b[i],a[i]});
	    }
	    int t =0;
        unordered_map<int,int>v;
        int count=0;
        map<int,int>::iterator it =m.begin();
       for(it ; it!=m.end()&& k--;it++)
      {
         
        if(v[(*it).second]==0 )
        {
            t+=(*it).first;
            v[(*it).second]++;
        }
          else 
          break;
      }
	    cout<<t<<endl;
	    
	}
	}
	return 0;
}
