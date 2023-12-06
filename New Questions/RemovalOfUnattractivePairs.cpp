#include<iostream>
#include<map>
#include<vector>
#include<math.h>
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
    map <char , int > mp;
    for (int i = 0; i < n; i++)
    {
     mp[str[i]]++;
    }
    int mmax=0;
    for(auto i : mp)
    {
        mmax=max(mmax,i.second);
    }
    cout<<max(n%2,2*mmax-n)<<endl;
    
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