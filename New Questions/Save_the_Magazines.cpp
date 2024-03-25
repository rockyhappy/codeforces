#include <iostream>
#include <map>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
long long int modulo(long long int x)
{
    long long int m = 1000000007;
    return (x % m + m) % m;
}
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> vec(n);
    vector<int> prefix(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (i == 0)
        {
            prefix[i] = vec[i];
        }
        else
        {
            prefix[i] = prefix[i - 1] + vec[i];
        }
    }
    long long int ans=0;
    vector<pair<int, int>> ranges;
    int start = -1;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            if (start == -1)
            {
                start = i;
            }
        }
        else
        {
            if (start != -1)
            {
                ranges.push_back({start, i - 1});
                start = -1;
            }
        }
    }
    if (start != -1)
    {
        ranges.push_back({start, n - 1});
    }

    for (int  i = 0; i < ranges.size(); i++)
    {
        int l=ranges[i].first;
        int r=ranges[i].second;
        int mn=INT_MAX;
        if(l==0)
        {
            ans+=prefix[r];
            continue;
        }
        else
        {
            for (int  j = l-1; j <=r; j++)
            {
                mn=min(mn,vec[j]);
                ans+=vec[j];
            }
            ans-=mn;   
        }
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