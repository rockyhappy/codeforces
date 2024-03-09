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
    int one=0,two=0,three=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)one=i;
        else if(arr[i]==2)two=i;
        else if(arr[i]==n)three=i;
    }
    if(three<one && three <two)
    {
        cout<<three+1<<" "<<min(one,two)+1<<endl;
        return;
    }
    if(three>one && three >two)
    {
        cout<<max(one,two)+1<<" "<<three+1<<endl;
        return;
    }
    cout<<1<<" "<<1<<endl;
    return;
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