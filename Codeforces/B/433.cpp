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
   int n;
   cin>>n;
   int arr[n];
   int s[n];
   vector<int>v,k;
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
     s[i]=arr[i];
   }
   sort(s,s+n);
   int sum=0;
   for(int i=0;i<n;i++)
   {
     sum+=arr[i];
     v.push_back(sum);
   }sum=0;
   for(int i=0;i<n;i++)
   {
     sum+=s[i];
     k.push_back(sum);
   }int m;
   cin>>m;
   for(int z=1;z<=m;z++)
   {
     int a,b,c;
     cin>>a>>b>>c;
     if(a==1)
     { 
          if(b==c)
          {
               cout<<arr[b-1]<<endl;
          }else if(b==1)
          {
               cout<<v[c-1]<<endl;
          }else
          {
          cout<<v[c-1]-v[b-2]<<endl;
          }
         
     }else
     { 
          if(b==c)
               {
                    cout<<s[b-1]<<endl;
               }else if(b==1)
               {
                    cout<<k[c-1]<<endl;
               }else
               {
         cout<<k[c-1]-k[b-2]<<endl; 
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
