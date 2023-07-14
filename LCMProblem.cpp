/**
 * This is a codeforces question and the solution for the same 
 * the question link is given below
 * https://codeforces.com/contest/1389/problem/A
 * 
 * the solution link is 
 * https://codeforces.com/contest/1389/submission/212249293
*/
#include<iostream>
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
        int l,r;
        cin>>l>>r;
        int ans1=-1,ans2=-1,x=l,y=0;
         if(x*2<=r)
            {
                ans1=x;
                ans2=x*2;
            }
        
        cout<<ans1<<" "<<ans2<<endl;
        
    }
}