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
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    vector<int> ans = vec;
    int small = vec[0];
    int small1 = vec[1];
    if(small1!=small)
    {
        cout<<"YES"<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (vec[i]!=small && vec[i] % small != 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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