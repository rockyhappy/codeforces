#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool compare(const pair<int, int>&i, const pair<int, int>&j) 
{ 
    return i.second < j.second; 
}

void solve()
{
    int n;
    cin>>n;
    vector<pair<long long int, long long int>> vec(n);
    long long int sum=0;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>vec[i].first;
        sum+=vec[i].first;
        vec[i].second=i;
    }
    sort(vec.begin(),vec.end());
     
     vector<long long int> ans(n);
     sum-=vec[n-1].first;
     ans[vec[n-1].second]=n-1;
    for(int i=n-2;i>=0;i--)
    {
        
        if(sum>=vec[i+1].first)
        {
            ans[vec[i].second]=ans[vec[i+1].second];
        }
        else
        {
            ans[vec[i].second]=i;
        }
        sum-=vec[i].first;
    }
    
    // cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    cout<<endl;
    
    
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