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
    int t ;
    cin>>t;
    while(t--)
    {
        int n, p;
        cin>>n>>p;
        vector<int> vec1(n+1);
        vector<int> vec2(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin>>vec1[i];
        }
        for (int i = 1; i <=n; i++)
        {
            cin>>vec2[i];
        }
        vector<pair<int,int>> v;
        for (int i = 1; i <=n; i++)
        {
            v.push_back({vec2[i],vec1[i]});
        }
        sort(v.begin(),v.end());
        int sum=0;
        int count=0;
        for (int i = 0; i <n; i++)
        {
            //cout<<v[i].first<<" "<<v[i].second<<endl;
            sum+=min(v[i].first,p);
            count+=v[i].second;
        }
        //cout<<sum<<endl;
        
    }
}