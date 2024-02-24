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
    long long int ans = 0;
    if(b%a==0)
    {
        ans=(b/a)*1ll*b;
        cout<<ans<<endl;
    }
    else{
        ans=b*1ll*a;
        int gcd=__gcd(a,b);
        cout<<ans/gcd<<endl;
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