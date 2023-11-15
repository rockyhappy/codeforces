#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define mod2 998244353
#define endl '\n' 
#define sz(x) (int)(x.size())
#define all(x) x.begin(),x.end()
#define print(x) {for(auto v: x) {cout << v<< ' ';} cout << endl;}
#define printp(x) {for(auto v: x) {cout << v.first << ':' << v.second << ' ';} cout << endl;}
#define printv(x) { for (auto v: x){ print(v) }}
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
signed main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif
        fastio();
    int t ;
    cin>>t;
    while(t--)
    {
            int n;cin >> n;
        vector<pair<int,int>> arr(n);
        for (int i=0;i<n;i++){
            cin >> arr[i].first;
            arr[i].second =i;
        }
        sort(all(arr));
 
        vector<int> ans(n);
        for (int i=0;i<n;i++){
            ans[arr[i].second] = n - i;
        }
        print(ans)
    }
}