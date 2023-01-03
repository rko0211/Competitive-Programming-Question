#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int x,y;
    cin>>x>>y;
    int a= (x|y);
    int b =(x^y);
    if((a^b)==x && (a|b)==y)
   cout<<a<<" "<<b<<endl;
   else
   cout<<-1<<endl;
}


    return 0;
}