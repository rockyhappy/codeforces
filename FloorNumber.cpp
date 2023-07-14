/**
 * This is a codeforces question and the solution for the same 
 * the question link is given below
 * https://codeforces.com/contest/1426/problem/A
 * 
 * the solution link is 
 * 
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
        int n ,x;
        cin>>n>>x;
        if(n<3)
        {
            cout<<1<<endl;
            continue;
        }
        n-=2;
        int floorSum=0;
        floorSum=(n+x-1)/x;
        floorSum++;
        cout<<floorSum<<endl;
        
    }
}