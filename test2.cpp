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
    cin >> n;
    string s,f;
    cin>>s;
    cin>>f;
    int cnt=0,cnt1=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]!=f[i]){
            if(s[i]=='1')
            {
                cnt++;
            }
            else{
                cnt1++;
            }
        }
        
    }
    cout<<cnt+cnt1-min(cnt,cnt1)<<endl;
    
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