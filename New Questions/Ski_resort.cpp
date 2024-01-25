/**
 * This is a codeforces problem
*/
#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n , k,q;
    cin>>n>>k>>q;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    long long int streak=0,cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(vec[i]<=q)
        {
            streak++;
        }
        else{
            streak=0;
        }
        if(streak>=k)
        {
            cnt+=streak-k+1;
        }

    }
    cout<<cnt<<endl;
    
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