#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    // cout<<"HELLO"<<endl;
    int n,k;
    cin>>n>>k;
    vector<int> vec(2*n);
    for(int i=0;i<2*n;i++)
    {
        cin>>vec[i];
    }
    set<int> s;
    set<int> s1;
    set<int> s2;
    set<int> s3;
    for (int i = 0; i < n; i++)
    {
        if(s.find(vec[i])==s.end())
        {
            s.insert(vec[i]);
        }
        else
        {
            s1.insert(vec[i]);
        }
    }
    for(int i=n;i<2*n;i++)
    {
        if(s3.find(vec[i])==s3.end())
        {
            s3.insert(vec[i]);
        }
        else
        {
            s2.insert(vec[i]);
        }
    }
    
   vector<int> ans1;
    vector<int> ans2;
    int cnt=k;
    for(auto i: s1)
    {
        if(cnt==0)
        {
            break;
        }
        ans1.push_back(i);
        ans1.push_back(i);
        cnt--;
    }
    cnt=k;
    for(auto i: s2)
    {
        if(cnt==0)
        {
            break;
        }
        ans2.push_back(i);
        ans2.push_back(i);
        cnt--;
    }
    cnt*=2;
    if(cnt!=0)
    {
        for(auto i: s)
        {
            if(s1.find(i)==s1.end())
            {
                ans1.push_back(i);
                ans2.push_back(i);
            }
        }
    }
    for (int i = 0; i < 2*k; i++)
    {
        cout<<ans1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 2*k; i++)
    {
        cout<<ans2[i]<<" ";
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