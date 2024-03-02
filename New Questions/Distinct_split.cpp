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
    string str;
    cin>>str;
    set<char> st1,st2;
    vector<int> dis1(n),dis2(n);
    int flag=0;
    for (int  i = 0; i < n; i++)
    {
        st1.insert(str[i]);
        dis1[i]=st1.size();
    }
    for (int  i = n-1; i >=0; i--)
    {
        st2.insert(str[i]);
        dis2[i]=st2.size();
    }
    int ans=0;
    for (int i = 0; i < n-1; i++)
    {

        ans=max(ans,dis1[i]+dis2[i+1]);
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