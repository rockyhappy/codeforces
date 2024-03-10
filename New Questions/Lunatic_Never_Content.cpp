#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool isPalindrome(vector<int> vec)
{
    int n=vec.size();
    for(int i=0;i<n/2;i++)
    {
        if(vec[i]!=vec[n-i-1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(isPalindrome(a))
    {
        cout<<"0"<<endl;
        return;
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