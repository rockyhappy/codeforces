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
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mn=min(mn,arr[i]);
    }
    long long int ans=0;
    // if(n==1){
    //     cout<<arr[0]-1<<endl;
    //     return;
    // }
    for(int i=0;i<n-1;i++)
    {
        ans+=(arr[i+1]-arr[i]>0)?arr[i+1]-arr[i]:0;
    }
    cout<<ans+arr[0]-1<<endl;
    

    

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