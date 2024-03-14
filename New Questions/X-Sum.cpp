#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int count(vector<vector<int>> vec, int x, int y)
{
    int n = vec.size();
    int m = vec[0].size();
    int sum = 0;
    int i = x, j = y;
    while(i<n && j<m)
    {
        sum+=vec[i][j];
        i++;
        j++;
    }
    i = x, j = y;
    while(i>=0 && j>=0)
    {
        sum+=vec[i][j];
        i--;
        j--;
    }
    i = x, j = y;
    while(i>=0 && j<m)
    {
        sum+=vec[i][j];
        i--;
        j++;
    }
    i = x, j = y;
    while(i<n && j>=0)
    {
        sum+=vec[i][j];
        i++;
        j--;
    }
    sum-=vec[x][y]*3;
    
    return sum;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>vec[i][j];
        }
    }
    int q=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            q=max(q,count(vec,i,j));
        }
        
    }
    cout<<q<<endl;
    
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