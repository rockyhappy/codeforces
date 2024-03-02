#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    vector<int> temp;
    for(int i=0;i<n;i++)
    {
        if(i==n-1 || vec[i]!=vec[i+1])
        {
            temp.push_back(vec[i]);
        }
    }
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     cout<<temp[i]<<" ";
    // }
    // cout<<endl;

    int size=temp.size();
    int cnt=0;
    for(int i=0;i<size;i++)
    {
        if(i==0 && temp[i+1]>temp[i])
        {
            cnt++;
        }
        if(i==size-1 && temp[i-1]>temp[i])
        {
            cnt++;
        }
        if(i>0 && i<size-1&& temp[i]<temp[i+1] && temp[i]<temp[i-1] )
        {
            // cout<<i<<" ";
            cnt++;
        }
    }
    if(cnt==1 || size==1)cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
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