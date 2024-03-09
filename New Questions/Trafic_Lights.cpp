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
    cin >> n;
    char c;
    cin >> c;
    string str;
    cin >> str;
    int marker = 0;
    if(c=='g') {
        cout<<0<<endl;
        return;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == 'g')
        {
            marker = i;
            break;
        }
    }
    string sub = str.substr(0, marker + 1);
    str= str+sub;
    n=str.size();   
    int mx = 0, mark=n-1;
    for (int i = n-1; i >=0 ; i--)
    {
        if (str[i] == 'g')
        {
            mark = i;
        }
        if(str[i]==c)
        {
            mx=max(mx,mark-i);
        
        }
    }
    cout<<mx<<endl;
    
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