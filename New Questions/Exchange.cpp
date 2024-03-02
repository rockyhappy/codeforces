#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n , a, b;
    cin>>n>>a>>b;
    if(b<a){
        cout<<1<<endl;
        return;
    }
    else 
    {
        cout<<(n+a-1)/a<<endl;
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