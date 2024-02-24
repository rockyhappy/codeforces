#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n ,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
     int sum=0;
    int mx=0;
    int copy=k;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(copy==0)
        {
            break;
        }
        sum+=a[i];
        copy-=1;
        mx=max(mx,b[i]);
        ans=max(sum+(copy*mx),ans);
    }
    cout<<ans<<endl;
    
    
}
int main()
{
 
   fastio(); 
    int t ;
    cin>>t;
    while(t--)
    {
        solve();    
    }
}