#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
#define accelerate ios_base::sync_with_stdio(false);cin.(NULL);cout.(NULL)
#define mod 1000000007
#define tc int t;cin>>t;while(t--)


void solve()
{
 tc
 {
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n=s.size();
    int k=0;
    int arr[10000];
    int cnt=0,one=0,even=0;
    for(int i=0;i<n-1;i++)
    {
       if(s[i]==s[i+1])
       {
        cnt++;
       }else
       {
        arr[k]=cnt+1;
        cnt=0;
        k++;
       }
    }
    arr[k]=cnt+1;
    k++;
    for(int i=0;i<k;i++)
    {  
        one=one+arr[i]%2;
        even=even+arr[i]/2;


        
    }if(one > even)
    {
        cout<<"NO"<<endl; 
    }else
    {
        cout<<"YES"<<endl;
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
   
   
   return 0
}
