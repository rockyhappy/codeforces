/**
* This is a codeforces question and the solution for the same
* The question link for the same is 
* https://codeforces.com/contest/1816/problem/A
*
* The solution for the same is 
* https://codeforces.com/contest/1816/submission/216880082
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
        cout<<2<<endl;
        cout<<a-1<<" "<<1<<endl;
        cout<<a<<" "<<b<<endl;
    }
}