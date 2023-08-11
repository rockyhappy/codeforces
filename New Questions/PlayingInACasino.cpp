/**
 * This is  a question from codeforces and the solution for the same 
 * The question link is as follows
 * https://codeforces.com/contest/1808/problem/B
 * 
 * The Solution for the same is
 * 
*/
#include<bits/stdc++.h>
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
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        long long  ans=0;
        for(int i=0;i<m;i++){
            vector<int> temp(n);
            for(int j=0;j<n;j++)
                temp[j]=a[j][i];
            
            sort(temp.begin(),temp.end());
            long long int curr=0;
            for(int i=0;i<n;i++){
                ans+=(i*1ll*temp[i]-curr);
                curr+=temp[i];
            }
        }
        cout<<ans<<"\n";
    }
}