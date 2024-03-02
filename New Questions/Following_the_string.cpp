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
    vector<int> vec1(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec1[i];
    }
    string str = "abcdefghijklmnopqrstuvwxyz";
    string ans="";
    int pointer = 0;
    map< char,int> mp;
    for (int i = 0; i < n; i++)
    {
        if(vec1[i]==0)
        {
            ans+=str[pointer];
            mp[str[pointer]]=1;
            pointer++;
        }
        else{
            for(auto it:mp)
            {
                if(it.second==vec1[i])
                {
                    ans+=it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
    
    
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