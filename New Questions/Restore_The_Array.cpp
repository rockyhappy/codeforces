#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>vec[i];
    }
    vector<int> ans(n);
    ans[0]=vec[0];
    ans[n-1]=vec[n-2];
    for(int i=1;i<n-1;i++)
    {
        ans[i]=min(vec[i-1],vec[i]);
    }
    for(int i=0;i<n;i++)
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

