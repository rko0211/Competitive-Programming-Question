#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<char,int>m;
	    for(int i=0;i<n;i++)
	    {
	        m[s[i]]++;
	    }
	  int maxval =INT_MIN;
	  char ch;
	    for(auto &it:m)
	    {
	       if(maxval<it.second)
	       {
	           maxval =it.second;
	           ch =it.first;
	       }
	    }
	   // Edge case in my program
	    if(maxval==n)
	    {
	        cout<<(maxval-1)<<endl;
	    }
	    else if(maxval==1)
	    {
	        cout<<0<<endl;
	    }

	    else
	    {
	        int len=0;
	        int ans =INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        if(ch==s[i])
	        {
	            len++;
	        }
	        else
	        {
	            ans =max(ans,len);
	            len=0;
	        }
	    }
        ans =max(ans,len);
	    cout<<ans<<endl;
	    }
	}
	return 0;
}
