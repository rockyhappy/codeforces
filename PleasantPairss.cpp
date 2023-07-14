/**
 * This is a codeforces Question and the solution for the same 
 * The question link is 
 * https://codeforces.com/contest/1541/problem/B
 * 
 * The solution link for the same problem is
 * https://codeforces.com/contest/1541/submission/213681337
 * 
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
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
        int n;
        cin>>n;
        vector<pair<int,int>> vec;
        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            vec.push_back({a,i+1});
        }
        sort(vec.begin(),vec.end());
        long long int count_pair=0;
        for (int  i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(vec[i].first*vec[j].first>=2*n)
                break;
                else 
                {
                    if(vec[i].first*1ll*vec[j].first==vec[i].second+vec[j].second)
                    count_pair++;
                }
            }
            
        }
        
        cout<<count_pair<<endl;
        
    }
}