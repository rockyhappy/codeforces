#include <iostream>
#include <map>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long int ans=1;
    for(int i=0;i<n;i++)
    {
        auto upper_bound_it = upper_bound(a.begin(), a.end(), b[n-i-1]);
        int upper_bound_index = n - distance(a.begin(), upper_bound_it);
        ans*=upper_bound_index-i;
        ans%=1000000007;
    }
    cout<<ans<<endl;
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}