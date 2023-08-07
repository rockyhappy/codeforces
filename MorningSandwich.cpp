/**
 * This is a codeforces question and the solution for the same 
 * the question link for the same is
 * https://codeforces.com/contest/1849/problem/A
 * 
 * the solution for the same is 
 * https://codeforces.com/contest/1849/submission/217463100
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
        int b,c,h;
        cin>>b>>c>>h;
        if(b-1<=c+h)
        {
            cout<<b+b-1<<endl;
        }
        else cout<<2*(c+h)+1<<endl;
    }
}