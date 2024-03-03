#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void print(vector<int> vec)
{
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>> vec(n+1);
    vector<vector<int>> ans(n+1);
    for (int i = 1; i <= n; i++)
    {
        int a,b;
        cin>>a>>b;
        ans[a].push_back(b);
    }
    long long int sum=0;
    for (int i = 1; i <= n; i++)
    {
        if(ans[i].size()==0)
        {
            continue;
        }
        sort(ans[i].begin(),ans[i].end(),greater<int>());
       
        for (int j = 0; j < ans[i].size() ; j++)
        {
            if(j<i)
            sum+=ans[i][j];
            
        }
        // print(ans[i]);
        
    }
    cout<<sum<<endl;
    
    

}
int main()
{
 
   fastio(); 
    int t ;
    cin>>t;
    while(t--)
    {
        solve();    
    }
}