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
    int mn=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    if(n%2==1)
    {
        cout<<"Mike"<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==mn)
        {
            if(i%2==0)
            {
                cout<<"Joe"<<endl;
                return;
            }
            else{
                cout<<"Mike"<<endl;
                return;
            }
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