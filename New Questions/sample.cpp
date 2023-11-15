#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    long long int n,m;
    cin>>n>>m;
    vector<long long int > vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    long long int ans=0;
    for(long long int i=0;i<n;i++)
    {
        long long int upper=vec[i]+m-1;
        long long int lower=vec[i];
        long long int up=upper_bound(vec.begin(),vec.end(),upper)-vec.begin();
        long long int low=lower_bound(vec.begin(),vec.end(),lower)-vec.begin();
        ans=max(ans,up-low);
    }
    cout<<ans<<endl;
}
int main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif
        fastio();
   solve();
}