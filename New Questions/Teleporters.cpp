#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n,coins ;
    cin>>n>>coins;
    vector<int> vec(n);
    long long int sum=0;
    priority_queue<int ,vector<int>,greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        sum=vec[i]+i+1;
        pq.push(sum);
    }
    int cnt=0;
    while( !pq.empty() &&  coins-pq.top()>=0)
    {
        int top=pq.top();
        pq.pop();
        coins-=top;
        cnt++;
    }
    cout<<cnt<<endl;
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