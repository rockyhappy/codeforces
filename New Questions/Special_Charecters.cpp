#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n ;
    cin>>n;
    if(n&1)
    {
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        for (int i = 0; i < n/2; i++)
        {
            cout<<(char)('A'+i);
            cout<<(char)('A'+i);
        }
        cout<<endl;
        return;
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