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
void print(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    int cnt = 1;
    if (n % 2 == 0)
    {

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                int length = (n + 1) / 2;
                for (int j = 0; j < n; j += 2)
                {
                    v[i][j] = cnt;
                    v[i][j + 1] = (n*n)-cnt+1;
                    cnt++;
                }
            }
            else
            {
                int length = n / 2;
                for (int j = n - 1; j >= 0; j -= 2)
                {
                    v[i][j] = cnt;
                    v[i][j - 1] = (n*n)-cnt+1;
                    cnt++;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                int length = (n + 1) / 2;
                for (int j = 0; j < n; j += 2)
                {
                    v[i][j] = cnt;
                    if(j+1<n)
                    v[i][j + 1] = (n*n)-cnt+1;
                    cnt++;
                }
            }
            else
            {
                int length = n / 2;
                v[i][n - 1] = (n*n)-cnt+2;
                for (int j = n - 2; j >= 0; j -= 2)
                {
                    v[i][j] = cnt;
                    if(j-1>=0)
                    v[i][j - 1] = (n*n)-cnt+1;
                    cnt++;
                }

            }
        }
    }
    print(v);
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