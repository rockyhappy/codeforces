#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void fun(vector<int> &v)
{
    int n=v.size();
    vector<int> ans;
    ans.push_back(v[0]);
    for (int i = 1; i < n; i++)
    {
        if(v[i]!=v[i-1])
        {
            ans.push_back(v[i]);
        }
    }
    v=ans;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        mx=max(mx,v[i]);
    }
    fun(v);
    n=v.size();
    for(int i=1;i<n-1;i++)
    {
        if(v[i]<v[i-1] && v[i]<v[i+1])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
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