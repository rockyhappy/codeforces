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
    vector<int>gcd;
    for (int  i = 0; i <= n/2; i++)
    {
        int temp=max(a[i],a[n-i-1])-min(a[i],a[n-i-1]);
        gcd.push_back(temp);
    }
    int ans=gcd[0];
    for(int i=0;i<gcd.size();i++)
    {
        ans=__gcd(ans,gcd[i]);
    }
    cout<<ans<<endl;
    
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