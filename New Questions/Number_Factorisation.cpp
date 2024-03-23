#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
long long int modulo(long long int x) { long long int m=1000000007;return (x % m + m) % m;}
map<int, int> primeFactors(int n)
{
    map<int, int> ans;
    while (n % 2 == 0)
    {
        ans[2]++;
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            ans[i]++;
            n = n / i;
        }
    }
    if (n > 2)
    {
        ans[n]++;
    }
    return ans;
}
void solve()
{
    int n;
    cin>>n;
    map<int,int> ans=primeFactors(n);
    int mn=INT_MAX;
    long long int pro=1;
    vector<pair<int,int>> v;
    for(auto x:ans)
    {
        pro=pro*x.first;
        v.push_back({x.second,x.first});
    }
    int sum=0;
    long long int pro2=1,pro3=0;
    sort(v.begin(),v.end());
    for(auto x : v)
    {
        pro3=pro3+((x.first-sum)*(pro/pro2));
        sum=x.first;
        pro2=pro2*x.second;

    }
    cout<<pro3<<endl;
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