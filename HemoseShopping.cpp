/**
 * This is a codeforces Question and the solution for the same 
 * The question link is 
 * https://codeforces.com/contest/1592/problem/B
 * 
 * The solution link is 
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
        int n,x,flag=0;
        cin>>n>>x;
        vector<pair<int,int>> vec;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            vec.push_back({a,i});
        }
        sort(vec.begin(),vec.end());
        for (int i = 0; i < n; i++)
        {
            cout<<vec[i].second<<" "<<endl;
            if(abs(i-vec[i].second)>=x||abs(i-vec[i].second)==0)
            {
                continue;
            }
            else 
            {
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
}