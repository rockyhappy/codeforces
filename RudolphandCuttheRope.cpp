/**
 * This is a codeforces question and the solution for the same 
 * the question link 
 * https://codeforces.com/contest/1846/problem/A
 * 
 * The link for the soltuion is 
 * https://codeforces.com/contest/1846/submission/212710908
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
        int n;
        cin>>n;
        int count=0;
        for (int  i = 0; i < n; i++)
        {
            int a,b;
            cin>>a>>b;
            if(a-b>0)
                count++;
        }
        cout<<count<<endl;
    }
}