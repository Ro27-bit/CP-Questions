#include<bits/stdc++.h>
using namespace std;
#define int long long int 
#define endl "\n"
#define accelerate ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define tc int t;cin>>t;while(t--)


void solve()
{
  tc
  { 
   int n;
   cin>>n;
    string s;
    cin>>s;
    string k(n,'W');
    int x,y;
    cin>>x>>y;
    int right[n],left[n];
    int sum_left=0,sum_right=0;
    for(int i=0;i<n;i++)
    {
      if(s[i]=='N')
      {
         right[i]=min(x,3*y);
         left[i]=min(3*x,y);
         sum_left+=left[i];
         sum_right+=right[i];
         
      }else if(s[i]=='S')
      {
         right[i]=min(y,3*x);
         left[i]=min(x,3*y);
         sum_left+=left[i];
         sum_right+=right[i];
         
      }else if(s[i]=='W')
      {
         right[i]=2*(min(x,y));
         left[i]=0;
         sum_left+=left[i];
         sum_right+=right[i];
         
      }else if(s[i]=='E')
      {
         left[i]=2*min(x,y);
         right[i]=0;
         sum_left+=left[i];
         sum_right+=right[i];
         
      }
    }int cnt=min(sum_left,sum_right);
    int ans=sum_left;
    for(int i=0;i<n;i++)
    {
       ans=ans-left[i] +right[i];
       if(ans<cnt)
       {
         cnt=ans;
       }

    }cout<<cnt<<endl;
    
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
