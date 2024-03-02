#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

#define ll long long  
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll mulmod(ll a, ll b, ll mod)
{
    ll res = 0; 
    a = a % mod;
    while (b > 0)
    {
        if (b % 2 == 1)
            res = (res + a) % mod;
        a = (a * 2) % mod;
 
        b /= 2;
    }
 
    return res % mod;
}
 
void solve()
{
    int n ,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    string str;
    cin>>str;
    long long int pro=1;
    vector<int> forward(n);
    vector<int> backward(n);
    ll result = 1;
    for (int i = 0; i < n; ++i) {

        result = mulmod(result, arr[i], m);
        cout<<result<<" ";
        forward[i] = result;
    }
    cout<<endl;
    result=1;
    for (int i = n-1; i >=0; i--) {
        result = mulmod(result, arr[i], m);
        cout<<result<<" ";
        backward[i] = result;
    }
    cout<<endl;
    
    
    cout<<result<<endl;
    
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