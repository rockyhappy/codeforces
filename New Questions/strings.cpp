/** This is a codeforces question and the solution for the same 
 * The question link for the same is 
 * https://codeforces.com/contest/1883/problem/B
 * the solution link for the same is 
 * https://codeforces.com/contest/1883/submission/229983665
*/
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
    int n, k;
    string str;
    cin>>n>>k>>str;
    map<char,int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
    }
    int cnt=0;
    for(auto i: mp)
    {
        if(i.second&1)cnt++;
    }
    if((cnt==0 )||(cnt==1))
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(k-(cnt-1)>=0)
    {
        cout<<"YES"<<endl;
        return ;
    }
    else {
        cout<<"NO"<<endl;
        return;
    }

    
}
int main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif
        fastio();
    int t ;
    cin>>t;
    while(t--)
    {
        solve();
    }
}