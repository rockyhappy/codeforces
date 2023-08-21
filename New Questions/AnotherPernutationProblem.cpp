/**
 * This is a codeforces question and the soltuion for the same 
 * The question link for the same is
 * https://codeforces.com/contest/1859/problem/C
 * 
 * The solutiion link for the same is
 * https://codeforces.com/contest/1859/submission/218680714
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
        int n;
        cin>>n;
         int sum=0,mx=-1,maxSum=0;
         if(n==2) {cout<<2<<endl;continue;}
        // the straight loop goes till i
        for(int i=(n/2);i<=n;i++)
        {
            sum=0,mx=-1;
            for(int j=1;j<=i;j++)
            {
                sum+=j*j;
                mx=max(mx,j*j);
            }
            int limit=n;
            for(int j=i+1;j<=n;j++)
            {
                sum+=limit*j;
                mx=max(mx,limit*j);
                limit--;
            }
            maxSum=max(maxSum,sum-mx);
        }
        cout<<maxSum<<endl;
    }
}