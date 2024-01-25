#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    string binary_str;
    cin>>binary_str;
    int n=binary_str.length();
    int cntZero=0,cntOne=0, cntQuestion=0;
    for (int i = 0; i < n; i++)
    {
        if(binary_str[i]=='?')
        {
            if(i==0)
            {
                binary_str[i]='0';
                continue;
            }
            if(binary_str[i-1]=='0')
            {
                binary_str[i]='0';
            }
            else{
                binary_str[i]='1';
            }
        }
    }
    cout<<binary_str<<endl;
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