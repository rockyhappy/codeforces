#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    long long int n,k,d,w;
    cin>>n>>k>>d>>w;
    vector<int> vec(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int cnt1=0;
    int v=0;
    int openTime=vec[1]+w;
    for(int i =1;i<=n;i++)
    {
        if(vec[i]>d+openTime || v==k)
        {
            openTime=vec[i]+w;
            v=0;
        }
        if(v==0)
        {
            cnt1++;
        }
        if(vec[i]<=d+openTime && v<k)
        {
            v++;
        }
    }
    cout<<cnt1<<endl;
    
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