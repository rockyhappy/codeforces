#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int m;
    cin>>m;
    vector<vector<int>> vec;
    set<int> s;
    for (int i = 0; i < m; i++)
    {
        int n;
        cin>>n;
        vector<int> temp(n);
        for (int j = 0; j < n; j++)
        {
            cin>>temp[j];
        }
        vec.push_back(temp);
    }
    vector<int> ans;
    for(int i=m-1;i>=0;i--)
    {
        int flag=0;
        for(int j=0;j<vec[i].size();j++)
        {
            if(s.find(vec[i][j])==s.end())
            {
                if(flag==0)
                {
                    ans.push_back(vec[i][j]);
                }
                flag=1;
                s.insert(vec[i][j]);
            }
        }
        if(flag==0)
        {
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
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