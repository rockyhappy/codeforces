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
void solve()
{
    int n ,k;
    cin>>n>>k;
    vector<int> vec(n);
    priority_queue<pair<int,int>> q;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        q.push({vec[i],i+1});
    }
    while (q.top().first>0)
    {
        if(q.top().first-k<=0)cout<<q.top().second<<" ";

        q.push({q.top().first-k,q.top().second});
        q.pop();
        for(auto i:q)
        {
            cout<<i.first<<endl;
        }
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
