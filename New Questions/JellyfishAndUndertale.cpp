/**
 * This is a codeforces Question and the solution for the same 
 * The Question link is https://codeforces.com/contest/1875/problem/A
 * The solution link for the same is https://codeforces.com/contest/1875/submission/227041570
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
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> vec(n);
        long long  int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
            sum+=min(vec[i],a-1);
        }
        sum+=b;
        cout<<sum<<endl;
    }
}