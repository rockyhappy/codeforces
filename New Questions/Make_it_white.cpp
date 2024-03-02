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
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='B')
        {
            cnt=i;
            break;
        }
    }

    reverse(str.begin(),str.end());
    for(int i=0;i<n;i++)
    {
        if(str[i]=='B')
        {
            cout<<(n-i-1)-cnt+1<<endl;
            return;
        }
    }
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