#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n ;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    long long int ans = 0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(st.find(s[i])==st.end())
        {
            cnt++;
            ans+=cnt;
        }
        else
        {
            ans+=cnt;
        }
        st.insert(s[i]);
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