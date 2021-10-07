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
     string s;
     cin>>s;
     int a,b,c,cnt=0,o=0,t=0,thr=0,ain,cin,bin;
     for(int i=0;i<s.size();i++)
     {
       if(s[i]=='1')
       {
          o++;
       }else if(s[i]=='2')
       {
          t++;
       }else
       {
          thr++;
       }
       if(o>0 && t>0 && thr>0)
       {  
          cnt++;
          break;
       }
     }if(cnt==0)
     {
          cout<<"0"<<endl;
     }else{
     int ans=100000000000;
     int chk=0;
     
          for(int i=0;i<s.size()-1;i++){
               if(s[i]!=s[i+1])
               {
                    chk++;
                    if(chk==1)
                    {
                         a=s[i];
                         ain=i;
                         b=s[i+1];
                         
                         
                    }else if(chk==2)
                    {
                         c=s[i+1];
                         bin=i;
                         cin=i+1;
                         if(a!=b && b!=c && a!=c)
                         {
                              ans=min(ans,cin-ain+1);
                              chk=1;
                              a=b;
                              ain=bin;
                              b=c;
                         }else
                         {
                              chk=1;
                              a=b;
                              ain=bin;
                              // bin=cin;
                              b=c;
                         }
                    }
 
               }
               }cout<<ans<<endl;
          
 
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
     cerr << "Time :" << (float)clock() / CLOCKS_PER_SEC << " Secs" << endl;
#endif
     
     
     return 0;
}
