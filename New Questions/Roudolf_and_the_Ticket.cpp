#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n ,m ,k;
    cin>>n>>m>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    long long int cnt=0;
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i]+b[j]<=k)
            {
                cnt++;
            }
        }
        
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