#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void showpq(
    priority_queue<int, vector<int>, greater<int> > g)
{
    long long int sum=0;
    while (!g.empty()) {
        // cout << ' ' << g.top();
        sum+=g.top();
        g.pop();
    }
    cout <<sum<< '\n';
}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr1.push_back(x);
    }
    vector<int> arr2(m);
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    priority_queue < int,vector<int>, greater<int>> pq (arr1.begin(),arr1.end());
    for(int i=0;i<m;i++)
    {
        pq.pop();
        pq.push(arr2[i]);
    }
    showpq(pq);

    

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