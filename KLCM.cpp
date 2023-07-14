/**
 * This is a codeforces question and the solution for the same
 * The question link is given below
 * https://codeforces.com/contest/1476/problem/A
 * 
 * The solution for the same is 
 * https://codeforces.com/contest/1497/submission/213164854
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
        int n,k;
        cin>>n>>k;
        if(n%2==1)
        {
            cout<<1<<" "<<n/2<<" "<<n/2<<endl;
        }
        else if(n%4==0)
        {
            cout<<(n/4)<<" "<<(n/4)<<" "<<(n/2)<<endl;
        }
        else 
        cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
    }
}