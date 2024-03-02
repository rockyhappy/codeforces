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
    vector<int> vec(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }
    int cnt=0,mx=0,cnt1=0;
    for(int i=1;i<=n;i++)
    {
        if(vec[i]==1)
        {
            cnt++;
        }
        else{
            cnt1+=cnt;
            cnt=0;
        }
        mx= max(mx,cnt+(int)(cnt1?ceil((cnt1+1)/2.0):0));
    }
    // cout<<endl;
    cout<<mx<<endl;
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