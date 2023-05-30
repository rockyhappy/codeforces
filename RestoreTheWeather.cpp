/**
 * This is A QUESTION FROM CODEFORCES
 * and the solution for the same, the
 * question link is as follows
 * https://codeforces.com/contest/1833/problem/B
 *
 * a more simplified solution for the problem can be
 * https://codeforces.com/contest/1833/submission/206510110
 *
 * upsolve this question using vector pair
 */
#include <bits/stdc++.h>
using namespace std;
void solve1(); // this approch is containing solution related to the vector
void solve2(); // This approch is related to the concept of vector pair
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve2();
    }
    return 0;
}
void solve1()
{
    int n, k;
    cin >> n >> k;
    vector<long long int> a(n), b(n), c(n), d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        d[i] = a[i];
    }
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        auto it = find(a.begin(), a.end(), d[i]);
        int index = it - a.begin();
        // cout<<a[index]<<" ";
        a[index] = pow(10,9) + 1;
        cout << b[index] << " ";
    }

    std::cout << std::endl;
}
void solve2()
{
    int n ,k;
    cin>>n>>k;
    vector<pair<int,int>>vec;
    vector <int> b(n);
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        vec.push_back(make_pair(a,i));
    }
    for (int i = 0; i < n; i++)
        cin>>b[i];
    //cout<<"hi"<<endl;
    sort(vec.begin(),vec.end());
    sort(b.begin(),b.end());
    vector <int> ans(n);
    for (int i = 0; i < n; i++)
        ans[vec[i].second]=b[i];
    for (int  i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;
    
}