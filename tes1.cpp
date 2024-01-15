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
    long long int  ans=a+b;
    if(ans%2==0)
    {
        cout<<"Bob"<<endl;
    }
    else
    {
        cout<<"Alice"<<endl;
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