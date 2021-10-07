#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
#define accelerate ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 100000000
#define ra(arr,n) int arr[n];for(int in=0;in<n;in++){cin>>arr[in];}
#define tc int t;cin>>t;while(t--)
 
 
void solve()
{
     
int n;
cin>>n;
int arr[n];
int sec[n];
int cnt=0;
for(int i=0;i<n;i++)
{
     cin>>arr[i];
     sec[i]=arr[i];
}sort(sec,sec+n);
int l=-1;
int r=-1;
for(int i=0;i<n;i++)
{
     if(arr[i]!=sec[i])
     {
          l=i;
          break;
     }
}for(int i=n-1;i>=0;i--)
{
     if(arr[i]!=sec[i])
     {
          r=i;
          break;
     }
}if(l==-1 && r==-1)
{
     cout<<"yes"<<endl<<"1"<<" "<<"1"<<endl;
}else
{
     reverse(arr+l,arr+r+1);
     for(int i=0;i<n;i++)
     {
          if(arr[i]!=sec[i])
          {
               cnt++;
               break;
          }
     }if(cnt==0)
     {
          cout<<"yes"<<endl<<l+1<<" "<<r+1<<endl;
               }else
               {
                    cout<<"no"<<endl;
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
