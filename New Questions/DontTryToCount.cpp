/** This is a codeforces question and the solution for the same 
 * The question link for the same is 
 * https://codeforces.com/contest/1881/problem/A
 * 
 * The solution link ffor the same is 
 * https://codeforces.com/contest/1881/submission/228219532
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool containsSubstring(const string &mainStr, const string &subStr) {
    return mainStr.find(subStr) != string::npos;
    }
void solve()
{
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int cnt=0;
    while(s1.length()<s2.length())
    {
        cnt+=1;
        s1+=s1;
    }
    for(int i=cnt;i<8;i++)
    {
        if(containsSubstring(s1,s2))
        {
            cout<<cnt<<endl;
            return;
        }
        s1=s1+s1;
        cnt++;
    }
    cout<<-1<<endl;
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