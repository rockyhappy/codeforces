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
    int l, r, x, a, b;
    cin >> l >> r >> x;
    cin >> a >> b;
    if (b == a)
    {
        cout << 0 << endl;
        return;
    }
    if (abs(b - a) < x && (a - x) < l && (a + x) > r)
    {
        cout << -1 << endl;
        return ;
    }

    if (abs(b - a) >= x)
    {
        cout << 1 << endl;
        return ;
    }
    if(b>a)
    {
        if(a-l>=x || r-b>=x)
        {
            cout<<2<<endl;
            return ;
        }
         if(b-l>=x && r-a>=x)
         {
            cout<<3<<endl;
            return ;
         }
         cout<<-1<<endl;
    }
    else{
        if(b-l>=x || r-a>=x)
        {
            cout<<2<<endl;
            return ;
        }
         if(a-l>=x && r-b>=x)
         {
            cout<<3<<endl;
            return ;
         }
         cout<<-1<<endl;
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