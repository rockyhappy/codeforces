#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    string str;
    cin>>str;
    int n=str.length();
    int p;
    cin>>p;
    long long int sum=0;
    map<char,int> mp;
    vector<pair<char,int>> v;
    for (int i = 0; i < n; i++)
    {
        sum+=str[i]-'a'+1;
        mp[str[i]]++;
        v.push_back({str[i],i});
    }
    if(sum<=p)
    {
        cout<<str<<endl;
        return;
    }
    string ans(n,'.');
    sort(v.begin(),v.end());
    sum=0;
    for (int i = 0; i < n; i++)
    {
        if(sum<=p && sum+v[i].first-'a'+1<=p)
        {
            ans[v[i].second]=v[i].first;
            sum+=v[i].first-'a'+1;
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(ans[i]!='.')
        {
            cout<<ans[i];
        }
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