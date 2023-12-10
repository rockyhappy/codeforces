/**
 * This is a codeforces question and the solution for the same
 * the question link for the same is 
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
void solve()
{
    int n ;
    cin>>n;
    vector<int> vec(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        mp[vec[i]]++;
    }
    int cnt=0;
    for(auto i: mp)
    {
        if(i.second>=2)cnt++;
    }
    if(cnt<2)
    {
        cout<<-1<<endl;
        return;
    }
    vector<int> ans(n,1);
    int flag1=0;
    for(auto i : mp)
    {
        if(i.second>=2&& flag1==0)
        {
            flag1=1;
            int flag2=0;
            for (int j = 0; j < n; j++)
            {
                if(vec[j]==i.first &&flag2==1)
                {
                    ans[j]=2;
                }
                if(vec[j]==i.first && flag2==0)
                {
                    ans[j]=1;
                    flag2=1;
                }
            }
            
        }
        else if(i.second>=2&& flag1==1)
        {
            int flag2=0;
            for (int j = 0; j < n; j++)
            {
                if(vec[j]==i.first  && flag2==1)
                {
                    ans[j]=3;
                }
                if(vec[j]==i.first && flag2==0)      
                {
                    ans[j]=1;
                    flag2=1;
                }          
            }
        }
    }
    for (int i = 0; i < n; i++)
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