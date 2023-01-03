// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int

// void solve()
// {
//         int n,k;
//     cin>>n>>k;
//     ll h[n];
//     ll p[n];
//     for(int i=0;i<n;i++)
//     cin>>h[i];
//     for(int i=0;i<n;i++)
//     cin>>p[i];
//     sort(p,p+n);

// int i=0;
// ll total_dmg=0;
// while(k>0)
// {
//   total_dmg+=k;
//   k-=p[i];
//   i++;
// }
//     for(int i=0;i<n;i++)
//     {
//        if(h[i]-total_dmg<=0)
//        {
//         h[i]=0;
//        }
//        else{
//         h[i]=(h[i]-total_dmg);
//        }
//     }
//     ll sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=h[i];
//     }
//     if(sum>0)
//     cout<<"NO"<<endl;
//     else
//     cout<<"YES"<<endl;
// }
// int main()
// {
// int t;
// cin>>t;
// while(t--)
// {
// solve();
    
// }

//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

#define ll long long 

int main()

{

    ll t, n, k, i, j, f, sum, h1, p1, n1, i1;

    cin>>t;

    

    for(;t--;)

    {

        cin>>n>>k;

        

        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> h, p;

        bool v[n];

        

        for(i=0; i<n; i++){

            v[i]=false;

        }

        

        f=0;

        

        sum=0;

        

        for(i=0; i<n; i++){

            cin>>j;

            h.push({j, i});

        }

        

        for(i=0; i<n; i++){

            cin>>j;

            p.push({j, i});

        }

        n1=0;

        

        for(;k>0 && n1<n;){

            sum=sum+k;

            

            while(h.empty()==false){

                

                h1=h.top().first;

                i1=h.top().second;

                h1=h1-sum;

            

            

            if(h1<=0){

                v[i1]=true;

                h.pop();

                n1++;

            }else{

                break;

            }

            

            }

            

            while(p.empty()==false && v[p.top().second]==true){

                p.pop();

            }

            

            if(p.empty()==false){

                p1=p.top().first;

                k=k-p1;

            }

            

        }

       

        if(n1==n){

            cout<<"YES\n";

        }else{

            cout<<"NO\n";

        }

        

        

    }

    

} 