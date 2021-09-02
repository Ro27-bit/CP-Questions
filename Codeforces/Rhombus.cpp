#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define accelerate ios_base::sync_with_stdio(false);cin.(NULL);cout.(NULL)
#define mod 1000000007
#define tc int t;cin>>t;while(t--)

void solve()
{
       
int n;
cin>>n;
int k=n+1;
for(int i=1;i<=n+1;i++)
{  
  for(int j=1;j<=2*n+1;j++)
  {
     if(j==n+i)
     {
          cout<<0<<endl;
          break;
     } if(j<=k-i)
     {
          cout<<"  ";
     } if(j==k-i+1)
     {
          cout<<0<<" ";
          for(int z=1;z<=n-k+i;z++)
          {
               cout<<z<<" ";
          }for(int z=n-k+i-1;z>=1;z--)
          {
               cout<<z<<" ";
          }
     }
  }}for(int i=n;i>=1;i--)
  {
      for(int j=1;j<=2*n+1;j++)
  {
     if(j==n+i)
     {
          cout<<0<<endl;
          break;
     } if(j<=k-i)
     {
          cout<<"  ";
     } if(j==k-i+1)
     {
          cout<<0<<" ";
          for(int z=1;z<=n-k+i;z++)
          {
               cout<<z<<" ";
          }for(int z=n-k+i-1;z>=1;z--)
          {
               cout<<z<<" ";
          }
     }
  }


}





}




signed main()
{  
     accelerate;

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("Error.txt","w",stderr);
#endif
      
      solve();
      
#ifndef ONLINE_JUDGE
     cerr << "Time : " << (float)clock() / CLOCKS_PER_SEC << " Secs" << endl;
#endif
 
 
return 0;
}
