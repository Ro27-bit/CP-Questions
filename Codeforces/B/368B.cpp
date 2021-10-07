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
    
 
      int n,m;
      cin>>n>>m;
      ra(arr,n);
      set<int>s;
      int a[100000];
      for(int i=n-1;i>=0;i--)
      { 
          if(s.find(arr[i])==s.end())
          {
               s.insert(arr[i]);
               if(i==n-1)
               {
                    a[i]=1;
               }else
               {
                    a[i]=a[i+1]+1;
               }

          }else
          {
               a[i]=a[i+1];
          }
          
      }for(int i=0;i<m;i++)
      {
          int x;
          cin>>x;
          cout<<a[x-1]<<endl;
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
