/**
 * Two out of three
 * Question Link:
 * https://codeforces.com/problemset/problem/1894/B
*/
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
    cin >> n;
    vector<int> vec(n);
    map<int,int> mp;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        mp[vec[i]]++;
    }
    int store=0;
    for(auto i : mp)
    {
        if(i.second>1)
        {
            store=i.first;
            cnt++;
        }   
    }
    if(cnt<2)
    {
        cout<<-1<<endl;
        return;
    }
    else{
        int flag=0;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            if(mp[vec[i]]==1)
            {
                ans[i]=1;
            }
            else{
                mp[vec[i]]--;
                if(vec[i]==store){
                    ans[i]=2;
                }
                else ans[i]=3;
            }
        }
        for(auto i : ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
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