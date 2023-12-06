#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    string str;
    cin>>str;
    int n =str.size();
    string ans;
    stack<int> cap;
    stack<int> small;
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='b')
        {
            if(!small.empty())
            {
                ans[small.top()]='0';
                small.pop();
            }
        }
        else if(str[i]=='B')
        {
    
            if(!cap.empty())
            {
                ans[cap.top()]='0';
                cap.pop();
            }
        }
        else if(str[i]>=96 && str[i]<=122)
        {
            small.push(i);
            ans=ans+str[i];
        }
         else if(str[i]>=65 && str[i]<=90)
        {
            cap.push(i);
            ans=ans+str[i];
        }
        // cout<<ans<<endl;
        // cout<<small.empty()<<endl;
        // if(!small.empty())
        // {
        //     cout<<str[small.top()]<<endl;
        // }
        // for(auto i : small)
        // {
        //     cout<<small.top();
        // }
        
    }
    int m=ans.size();
    string s;
    for (int i = 0; i < m; i++)
    {
        if(ans[i]!='0')
        s+=ans[i];
    }
    
    cout<<s<<endl;
    
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