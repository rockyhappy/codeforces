#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
long long int modulo(long long int x) { long long int m=1000000007;return (x % m + m) % m;}
void solve()
{
    int n ;
    cin>>n;
    vector<int> v(n);
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    long long int ans=INT_MIN, sum2=0;
    for (int i = 0; i < n-1; i++)
    {
        sum2+=v[i];
        ans=max(ans, __gcd(sum2,sum-sum2));
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