#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n , k;
    cin>>n>>k;
    vector<int> arr(n);
    int cnt=1;
    for(int i=1;i<=n;i+=2)
    {
        arr[i]=cnt++;
    }
    cnt=n;
    for(int i=0;i<n;i+=2)
    {
        arr[i]=cnt--;
    }
    //print the array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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