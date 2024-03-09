#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    long long int n,k,b,s;
    cin>>n>>k>>b>>s;
    if(s<k*b)
    {
        cout<<-1<<endl;
        return;
    }
    if(s==k*b)
    {
        cout<<k*b<<" ";
        for (int i = 0; i < n-1; i++)
        {
            cout<<0<<" ";
        }
        cout<<endl;
        return;
    }
    if(s>k*b && s<((k*b) +(k-1)))
    {
        cout<<s<<" ";
        for (int i = 0; i < n-1; i++)
        {
            cout<<0<<" ";
        }
        cout<<endl;
        return;
    }
    else{
        vector<long long int> v(n,0);
        v[0]=k*b + (k-1);
        s-=(k*b + (k-1));
        for (int i = 1; i < n; i++)
        {
            if(s>k-1)
            {
                v[i]=k-1;
                s-=(k-1);
            }
            else{
                v[i]=s;
                s=0;
            }                       
        }
        if(s==0)
        {
            for (int i = 0; i < n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
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