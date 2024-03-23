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
    vector<int> vec(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int median=(n+1)/2;
    int median2=median-1;
    int cnt=0;
    for (int i = median; i <=n; i++)
    {
        if(vec[i]==vec[median])
        cnt++;
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