#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n ,k;
    cin>>n>>k;
    string str;
    cin>>str;
    map<char,int> cap;
    map<char,int> small;
    for(int i=0;i<n;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            cap[str[i]]++;
        }
        else
        {
            small[str[i]]++;
        }
    }
    int cnt=0,sum=0;
    for(char i='A';i<='Z';i++)
    {
        if(cap.find(i)!=cap.end() || small.find(i+32)!=small.end())
        {
            int total= max(cap[i],small[i+32])-min(cap[i],small[i+32]);
            sum+=min(cap[i],small[i+32]);
            total/=2;
            if(k>0)
            {
                if(k>=total)
                {
                    k-=total;
                    sum+=total;
                }
                else
                {
                    sum+=k;
                    k=0;
                }
            } 
        }
    }
    cout<<sum<<endl;
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