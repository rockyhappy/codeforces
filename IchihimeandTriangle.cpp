/**
 * This is a codeforces question and the so;lution for the same 
 * the question link is given below
 * https://codeforces.com/contest/1337/problem/A
 * 
 * The solution link for the problem is 
 * https://codeforces.com/contest/1337/submission/212250975
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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<b<<" "<<c<<" "<<c<<endl;
    }
}