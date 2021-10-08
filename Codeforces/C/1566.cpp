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
    int n;
     cin>>n;
     string s,y;
     cin>>s>>y;
     int cnt=0;
     int tempo=0;
     int zero=0;
           for(int i=0;i<n;i++)
          { 
               if(s[i]=='1' && y[i]=='1')
               { 
                if(zero>0)
               {
                    cnt=cnt+2;
                    zero=0;
               }else
               { 
                  tempo++;
               }
                    
               } if(s[i]=='0' && y[i]=='0')
               {
                  if(tempo>0)
                  {
                    cnt=cnt+2;
                    tempo=0;
                  }else
                  { 
                    if(zero>0)
                         {
                              cnt=cnt+1;
                              zero=0;
                         }
                    zero++;
                  }
               }
                 if(s[i] =='1' && y[i]=='0')
               { 
                    if(zero>0)
                    {
                         cnt=cnt+1;
                    }
                    tempo=0;
                    zero=0;
                    cnt=cnt+2;
               } if(s[i]=='0' && y[i]=='1')
               { 
                    if(zero>0)
                    {
                         cnt=cnt+1;
                    }
                    tempo=0;
                    zero=0;
                    cnt=cnt+2;
               }
                




 }
 if(zero>0)
     {
          cnt=cnt+zero;
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
