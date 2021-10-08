#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define accelerate ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define tc int t;cin>>t;while(t--)


void solve()
{
  
   tc
   {
    int n,m;
    cin>>n>>m;
    int k=n*m;
    int arr[k];
    int cnt=0;
    int end=m;
    for(int i=0;i<k;i++)
    {
     cin>>arr[i];
    }
    for(int i=0;i<k;i++)
    { 
      if(i%m==0 && i!=0)
      {
          end=i/m * m;
      }
      for(int j=i+1;j<end;j++)
      {
          if(arr[i]<arr[j])
          {
               cnt++;
          }
      }
    }
    cout<<cnt<<endl;
 
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
