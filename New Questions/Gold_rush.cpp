#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool reach(int n , int target)
{
    if(n==target)
    {
        return true;
    }
    if(n<target || n%3!=0)
    {
        return false;
    }
    if(n>target)
    {
        return reach(n/3 , target) || reach((2*n)/3,target);
    }
}
void solve()
{
    int n , target;
    cin>>n>>target;
    if(reach(n,target))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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