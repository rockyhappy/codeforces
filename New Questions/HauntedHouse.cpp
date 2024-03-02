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
    string str;
    cin>>str;
    vector<long long int> ans(n);
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(str[i]=='1') cnt++;
    }
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            s.push(i);
        }
    }
    for(int i=n-1;i>=0;i--)
    {
 
        if(str[i]=='0')
        {
         ans[n-i-1]=0;
        }
        if(str[i]=='1' || str[i]=='2')
        {
            if(s.empty())
            {
                ans[n-i-1]=-1;
            }
            else{
                while(!s.empty())
                {
                    if(s.top()<i){
                        ans[n-i-1]=i-s.top();
                        str[s.top()]='2';
                        s.pop();
                        break;
                    }
                    s.pop();
                }
            }
            
        }

    }

    for(int i=0;i<n;i++)
    {
        if(i!=0 && ans[i]!=-1)
        {
            ans[i]=ans[i-1]+ans[i];
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(cnt==0) break;
        else{
            ans[i]=-1;
            cnt--;
        }
    }
    for(int i=0;i<n;i++)
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