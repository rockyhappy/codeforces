/**This is a codeforces questiong and the solution for the same 
 * The link for the question is 
 * https://codeforces.com/contest/1883/problem/A
 * The solution lnhk for the same is 
 * https://codeforces.com/contest/1883/submission/229964333
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
    string s;
    cin>>s;
    s='1'+s;
    //cout<<s<<endl;
    vector<int> pos(5);
    for(int i=0;i<=4;i++)
    {
        pos[i]=s[i]-'0';
        if(pos[i]==0)
            pos[i]=10;
    }
    int ans=0;
    for(int i=1;i<=4;i++)
    {
        ans+=abs(pos[i]-pos[i-1])+1;
    }
    cout<<ans<<endl;
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