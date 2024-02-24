#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int ans=0;
    ans+=arr[0];
    ans++;
    for(int i=1;i<n;i++)
    {
        int mod=ans%arr[i];
        mod=arr[i]-mod;
        if(mod==arr[i])
        {
            mod=0;
        }
        ans+=mod;
        ans++;
        
    }
    cout<<ans-1<<endl;
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