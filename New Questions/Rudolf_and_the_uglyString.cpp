#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int count(string s,string t)
{
    int n=s.length();
    int m=t.length();
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==t[0])
        {
            int flag=0;
            for (int j = 0; j < m; j++)
            {
                if(s[i+j]!=t[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
void solve()
{
    int n ;
    cin>>n;
    string s;
    cin>>s;
    int cnt1=count(s,"map");
    int cnt2=count(s,"pie");
    int cnt3=count(s,"mapie");
    cout<<cnt1+cnt2-cnt3<<endl;
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