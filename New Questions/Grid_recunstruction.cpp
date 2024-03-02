/**
 * This is a solution for Grid Reconstruction problem from codeforces
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
    cin>>n;
    vector<int> a(n+1);
    vector<int> b(n+1);
    a[1]=2*(n)-1;
    b[n]=2*n;
    int c=n;
    for(int i=1;i<=n;i+=2)
    {
        b[i]=c;
        a[i+1]=c-1;
        c-=2;
    }
    c=2*n-2;
    for(int i=2;i<n;i+=2)
    {
        b[i]=c;
        a[i+1]=c-1;
        c-=2;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<b[i]<<" ";
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