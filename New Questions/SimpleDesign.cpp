/**
 * This is a code forces question and the solution for the same 
 * The question link for the same is 
 * 
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int x,k;
    cin>>x>>k;
    int copy=x;
    int sum=0;
    for(int i=x;true;i++)
    {
        //cout<<i<<" ";
        sum=0;
        copy=i;
        while(i>0)
        {
            sum+=i%10;
            i/=10;
        }
        if(sum%k==0)
        {
            cout<<copy<<endl;
            return;
        }
        i=copy;
    }

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