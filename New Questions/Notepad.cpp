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
    set<string> s;
    string temp="";
    for(int i=0;i<n-1;i++)
    {
        string temp2="";
        temp2+=str[i];
        temp2+=str[i+1];
        if(s.find(temp2)==s.end())
        {
            s.insert(temp);
            temp="";
            temp+=str[i];
            temp+=str[i+1];
        }
        else
        {
            cout<<"YES"<<endl;
            return;
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