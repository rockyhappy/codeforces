#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;
    int steps=n+m-2;
    if(x+d<n && y-d>1)
    {
        cout<<steps<<endl;
        return;
    }
    if(x-d>1 && y+d<m)
    {
        cout<<steps<<endl;
        return;
    }
    else
    {
        cout<<-1<<endl;
        return;
    }
    if((x+d<n || x-d>1) && (y+d<m || y-d>1))
    {
        cout<<steps<<endl;
        return;
    }
    else{
        cout<<-1<<endl;
        return;
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