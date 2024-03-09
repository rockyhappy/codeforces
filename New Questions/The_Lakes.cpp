#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int dfs(vector<vector<int>> &v,int i,int j)
{
    if(v[i][j]==0)
    {
        return 0;
    }
    int temp = v[i][j];
    v[i][j]=0;
    int a = dfs(v,i+1,j);
    int b = dfs(v,i-1,j);
    int c = dfs(v,i,j+1);
    int d = dfs(v,i,j-1);
    //v[i][j]=temp;
    return temp+a+b+c+d;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n+2,vector<int>(m+2));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>v[i][j];
        }
    }
     int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(v[i][j]!=0)
            {
                ans = max(ans,dfs(v,i,j));
            }
        }
    }
    cout<<ans<<endl;
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