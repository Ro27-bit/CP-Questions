#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define accelerate ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define ra(arr,n) int arr[n];for(int in=0;in<n;in++){cin>>arr[in];}
#define tc int t;cin>>t;while(t--)


void solve()
{ 
    tc
    {
     int n;
     cin>>n;
     ra(arr,n);
     sort(arr,arr+n);
     int m=0;
     int diff=0,same=0;
     for(int i=0;i<n-1;i++)
     {
          if(arr[i]!=arr[i+1])
          {
               diff++;
               same=0;
          }else
          {
               same++;
               
          }m=max(m,same);
     }if(m>0)
     {
          m=m+1;
     }
     
     if(m==0 && diff>=1)
     {
          cout<<1<<endl;
     }else if(diff==0 && n>1)
     {
          cout<<1<<endl;
     }else
     {
      if(diff>=m)
     {
          cout<<m<<endl;
     }else
     { 
          if(m-diff>=2)
          {
          cout<<diff+1<<endl;
     }else
     {
          cout<<diff<<endl;
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
