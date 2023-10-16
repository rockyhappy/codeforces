/**
 * This is a codeforces question and the solution for the sane 
 * The question link
 * https://codeforces.com/contest/1790/problem/C
 * 
 * The solution for the same is
 * https://codeforces.com/contest/1790/submission/228456600
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> vec(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            cin>>vec[i][j];
        }
    }
    int cnt = 0; 
    int el=0; 
    //cout<<vec[0][1]<<endl;
    for (int i = 0; i <n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = vec[i][1];
        }
        else if (el == vec[i][1]) cnt++;
        else cnt--;
    }
    cout<<el<<" ";
    for(int i=0;i<n;i++)
    {
        if(el!=vec[i][1])
        {
            for(int j=1;j<n;j++)
            {
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
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