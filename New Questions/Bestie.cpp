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
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int gcd=vec[0];
    for(int i=1;i<n;i++)
    {
        gcd=__gcd(gcd,vec[i]);
    }
    if(gcd==1)
    {
        cout<<0<<endl;
        return;
    }
    cout<<mx<<endl;
    if(__gcd(gcd,n)==1)
    {
        cout<<1<<endl;
        return;
    }
    if(__gcd(gcd,n-1)==1)
    {
        cout<<2<<endl;
        return;
    }
    cout<<3<<endl;
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