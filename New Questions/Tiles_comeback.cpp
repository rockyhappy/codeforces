/**
 * Title: Tiles_comeback
 * Question Link:
 * https://codeforces.com/problemset/problem/1851/C
 */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    if (vec[0] == vec[n - 1])
    {
        int cnt = 2;
        for (int i = 1; i < n - 1; i++)
        {
            if (vec[i] == vec[0])
            {
                cnt++;
            }
        }
        if (cnt >= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        int cnt = k, markedi = -1;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] == vec[0])
            {
                cnt--;
            }
            if (cnt == 0)
            {
                markedi = i;
                break;
            }
        }
        int cnt2 = k, markedj = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (vec[i] == vec[n - 1])
            {
                cnt2--;
            }
            if (cnt2 == 0)
            {
                markedj = i;
                break;
            }
        }
        if (markedi != -1 && markedj != -1 && markedi < markedj)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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