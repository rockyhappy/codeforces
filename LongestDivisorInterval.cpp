/**
 * This is a codeforces question and the solution for the same 
 * The question link for the same is
 * https://codeforces.com/contest/1855/problem/B
 * 
 * The solution for the same is 
 * https://codeforces.com/contest/1855/submission/216706676
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
        long long int n;
        cin>>n;
        int count=1;
        for (int i = 2; i <= n; i++)
        {
            if(n%i!=0)break;
            count++;
        }
        cout<<count<<endl;
    }
}