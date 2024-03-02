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
    vector<int> arr(n);
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    if(mp.size()==2)
    {
        cout<<n/2+1<<endl;
    }
    else{
        cout<<n<<endl;
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