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
    vector<int> vec(n); 
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<" "<<(int)pow(2,ceil(log2(vec[i])))-vec[i]<<endl;
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