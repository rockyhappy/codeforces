#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n,windowSize;
    cin>>n>>windowSize;
    string s;
    cin>>s;
    int open=0,close=0, cntBlack=0,cntWhite=0;
    for (int i = 0; i < windowSize; i++)
    {
        if(s[i]=='B')
        cntBlack++;
        else
        cntWhite++;
    }
    int mnWhite=cntWhite;
    for (int i = windowSize; i < n; i++)
    {
        if(s[i]=='B')
        cntBlack++;
        else
        cntWhite++;
        if(s[i-windowSize]=='B')
        cntBlack--;
        else
        cntWhite--;
        mnWhite=min(mnWhite,cntWhite);
    }
    cout<<mnWhite<<endl;
    
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