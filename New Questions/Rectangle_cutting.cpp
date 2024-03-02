#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int a,b;
    cin>>a>>b;
    int mn=min(a,b);
    int mx=max(a,b);
    if(mn%2==0){
        cout<<"Yes"<<endl;
    }
    else{
        if(mx%2==0 && mn*2!=mx){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
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