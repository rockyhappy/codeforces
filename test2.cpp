#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int Mex(vector<int> vec)
{
    set<int> s;
    for(auto i: vec)
    {
        s.insert(i);
    }
    for(int i=0;i<vec.size();i++)
    {
        if(s.find(i)==s.end())
        {
            return i;
        }
    }
    return vec.size();
}
void solve()
{
    int n ;
    cin>>n;
    vector<int> vec(n);
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        mp[vec[i]]++;
    }
    sort(vec.begin(),vec.end());
     vector<int> ans;
     vector<int> ans1;
     for(auto i: mp)
     {
        if(i.second==1)
        {
            ans1.push_back(i.first);
        }
        else
        {
            ans.push_back(i.first);
        }
     }
     int cnt=0;
     for(int i=0;i<ans1.size();i++)
     {
        if(cnt%2==0)
        {
            ans.push_back(ans1[i]);
        }
        cnt++;
     }
     cout<<Mex(ans)<<endl;

   
   


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