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
     vector<int>v;
     int arr[n];
     int cnt=0,ans=0;
     for(int i=0;i<n;i++)
     { 
          cin>>arr[i];
          v.push_back(arr[i]-i);
     }sort(v.begin(),v.end());
     for(int i=0;i<n-1;i++)
     {
          if(v[i]==v[i+1])
          {
               cnt++;
          }else
          {
               ans+=cnt*(cnt+1)/2;
               cnt=0;
          }
     }if(cnt>0)
     {
               ans+=cnt*(cnt+1)/2;
     }cout<<ans<<endl;
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
