/**
 * This is a codeforces question and the solution for the same 
 * The question link for the same is
 * https://codeforces.com/contest/1881/problem/B
 * 
 * The solution link for the same is
 * https://codeforces.com/contest/1881/submission/228221595
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mn=min(a,min(b,c));
    if(a%mn!=0||b%mn!=0||c%mn!=0)
    {
        cout<<"NO"<<endl;
        return ;
    }
    int cnt=(a/mn)+(b/mn)+(c/mn);
    if(cnt-3>3)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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