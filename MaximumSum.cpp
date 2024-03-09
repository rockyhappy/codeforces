/**
 * This is a problem from codefdorces and the 
 * solution for the same, the problrm link for the same is 
 * https://codeforces.com/contest/1832/problem/B
 * 
 * This solution is incorrect and find and undertstand the correct 
 * solution
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
    int n;
    cin>>n;
    vector<int> arr(n);
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());

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