/**
 * This is the solution for problem Haman Odessey in codeforces
 * Question link:
 * https://codeforces.com/problemset/problem/1847/B
*/
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
void solve()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    int mn;
    cin >> vec[0];
    mn = vec[0];
    for (int i = 1; i < n; i++)
    {
        cin >> vec[i];
        mn = vec[i] & mn;
    }
    if (mn != 0)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        int sum = vec[0], cnt = 0;
        for (int i = 0; i < n; i++)
        {
            sum &= vec[i];
            if (sum == mn)
            {
                sum = vec[i + 1];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
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