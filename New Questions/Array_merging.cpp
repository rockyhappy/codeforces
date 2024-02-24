#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//this is a question involving the concepts of arrray merging 
//the question requires you to merge the arrays un such a way that the longest streak of an element is formed
void solve()
{
    int n;
    cin>>n;
    vector<int> vec1(n);
    vector<int> vec2(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>vec2[i];
    }
    vector<int> vec3(2*n);
    map<int,int> mp;
    int streak=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            streak=1;
            mp[vec1[i]]=streak;
        }
        if(vec1[i]==vec1[i-1]){
            streak++;
            mp[vec1[i]]=max(mp[vec1[i]],streak);
        }
        else
        {
            streak=1;
            mp[vec1[i]]=max(mp[vec1[i]],streak);
        }
    }
    streak=0;
    map<int,int> mp2;
    for(int i=0;i<n;i++)
    {
        if(vec2[i]==vec2[i-1]){
            streak++;
            mp2[vec2[i]]=max(mp2[vec2[i]],streak);
        }
        else
        {
            streak=1;
            mp2[vec2[i]]=max(mp2[vec2[i]],streak);
        }
    }

    int mxmn=INT_MIN;
    for(auto i: mp)
    {
        if(mp2.find(i.first)!=mp2.end())
        {
            mxmn=max(mxmn,i.second+mp2[i.first]);
        }
        else
        {
            mxmn=max(mxmn,i.second);
        }
    }
    for(auto i: mp2)
    {
        if(mp.find(i.first)!=mp.end())
        {
            mxmn=max(mxmn,i.second+mp[i.first]);
        }
        else
        {
            mxmn=max(mxmn,i.second);
        }
    }
    cout<<mxmn<<endl;

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