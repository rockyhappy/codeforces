#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n, x,k;
    cin>>n>>k>>x;
    vector<int> vec(n);
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        sum+=vec[i];
    }
    vector<int> prefix(n+1,0);
    sort(vec.begin(),vec.end());
    for(int i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+vec[i-1];
    }
    // for(int i=0;i<=n;i++)
    // {
    //     cout<<prefix[i]<<" ";
    // }
    // cout<<endl;
    long long ans=INT_MIN;
    for(int i=n;i>=0;i--)
    {
        long long pos=prefix[(i-x<=0)?0:i-x];
        long long temp=prefix[i]-pos;
        // cout<<temp<<" ";
        ans=max(ans,pos-temp);
        if(k==0)
        {
            break;
        }
        k--;
    }
    // cout<<endl;
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