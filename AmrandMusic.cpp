/**
 * This is a codeforces question and the solution for the same 
 * the question link is 
 * https://codeforces.com/contest/507/problem/A
 * 
 * The solution for the same is 
 * https://codeforces.com/contest/507/submission/212271880
*/
#include<iostream>
#include<map>
#include <bits/stdc++.h>
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
   
        int n,k;
        cin>>n>>k;
        vector<pair<int ,int>> vec;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            vec.push_back({a,i+1});
        }
        sort(vec.begin(),vec.end());
        vector<int> ans;
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            if(sum+vec[i].first>k)
            break;
            sum+=vec[i].first;
            ans.push_back(vec[i].second);
        }
        cout<<ans.size()<<endl;
        for(auto i:ans)cout<<i<<" ";
    
}