#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    string str, str1;
    cin>>str>>str1;
    int n =str.size(),m=str1.size();
    if(str[0]==str1[0])
    {
        cout<<"YES"<<endl;
        cout<<str[0]<<'*'<<endl;
        return;
    }
    if(str[n-1]==str1[m-1])
    {
        cout<<"YES"<<endl;
        cout<<'*'<<str[n-1]<<endl;
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            if(str[i]==str1[j] && str[i+1]==str1[j+1])
            {
                cout<<"YES"<<endl;
                cout<<"*"<<str[i]<<str[i+1]<<"*"<<endl;
                return ;
            }
            
        }
        
    }
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