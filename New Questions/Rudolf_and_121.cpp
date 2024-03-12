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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-2; i++)
    {
        if(a[i]<0)
        {
            cout<<"NO"<<endl;
            return;
        }
        int temp=a[i];
        a[i]=0;
        a[i+1]-=temp*2;
        a[i+2]-=temp;
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
    
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