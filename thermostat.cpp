#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll l,r,x,a,b;
    cin>>l>>r>>x;
    cin>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        return;
    }
    else if(a<b)
    {
        if(b-a>=x)
        {
            cout<<1<<endl;
            return ;
        }
        if(abs(l-a)>=x)
        {
            cout<<2<<endl;
            return ;
        }
        else if(abs(r-b)>=x)
        {
            cout<<2<<endl;
            return;
        }
        else if(r-a>=x && b-l>=x){

                    cout<<"3\n";
return;
                }
                else{

                    cout<<"-1\n";
return ;
                }

    }

    else
    {

       if(a-b>=x)
        {
            cout<<1<<endl;
            return ;
        }
        if(abs(l-b)>=x)
        {
            cout<<2<<endl;
            return ;
        }
        else if(abs(r-a)>=x)
        {
            cout<<2<<endl;
            return;
        }
        else if(r-b>=x && a-l>=x){

                    cout<<"3\n";
                   return;
                }
                else{

                    cout<<"-1\n";
 return;
                }

    }


    

}
int main()
{
int t;
cin>>t;
while (t--)
{
    /* code */
solve();
}


    return 0;
}