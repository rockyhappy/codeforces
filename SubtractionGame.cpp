/**
 * This is a codeforces question and the solution for the same 
 * The question link is given below
 * https://codeforces.com/contest/1844/problem/A
 * the solution link for the same is
 * https://codeforces.com/contest/1844/submission/215102983
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
        int a,b;
        cin>>a>>b;
        cout<<a+b<<endl;
    }
}