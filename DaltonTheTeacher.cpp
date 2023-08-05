/**
 * This is a codeforces question and solution for the same 
 * The question link for the same is
 * https://codeforces.com/contest/1855/problem/A
 * 
 * The solution link for the same is 
 * https://codeforces.com/contest/1855/submission/216599845
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
        int n ;
        cin>>n;
        vector<int> vec(n);
        int count=0;
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
            if(i+1==vec[i])
            {
                count++;
            }
        }
        cout<<(count+1)/2<<endl;
    }
}