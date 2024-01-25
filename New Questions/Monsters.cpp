/**
 * This is a codeforcex question and the solution for the same 
 * the question link for the same is 
 * https://codeforces.com/problemset/problem/1849/B
 * 
*/
#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
    if(a.first<b.first)
    {
        return true;
    }
    else if(a.first==b.first)
    {
        if(a.second>b.second)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    else
    {
        return false;
    }
}
void solve2()
{
    int n ,k;
    cin>>n>>k;
    vector<int> vec(n+1);
    vector<pair<int,int>> ans;
    for (int i = 1; i <= n; i++)
    {
        cin>>vec[i];
        vec[i]%=k;
        if(vec[i]==0)
        {
            vec[i]=k;
        }
        ans.push_back({vec[i],i});
    }
    sort(ans.begin(),ans.end(), sortbysecdesc);
    vector<int> show;
    for(auto i:ans)
    {
        show.push_back(i.second);
    }
    reverse(show.begin(),show.end());
    for (int i = 0; i < show.size(); i++)
    {
        cout<<show[i]<<" ";
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
        solve2();
    }
}
