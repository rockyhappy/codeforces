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
    vector<int> a(n);
    map<int,queue<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]; 
        mp[a[i]].push(i);
    }
    for(auto x:mp)
    {
        if(x.second.size()==1)
        {
            cout<<-1<<endl;
            return;
        }
    }
    vector<int> ans(n);
    map<int,int> m;
    // for(auto i = mp.begin();i!=mp.end();i++)
    // {
    //     int temp=i->second.front();
    //     i->second.pop();
    //     i->second.push(temp);
    // }
    for(auto &i : mp)
    {
        int temp=i.second.front();
        i.second.pop();
        i.second.push(temp);
    }
    for (int i = 0; i < n; i++)
    {
       ans[i]=mp[a[i]].front();
        mp[a[i]].pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]+1<<" ";
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