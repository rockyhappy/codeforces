#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void solve()
{
    int n ;
    cin>>n;
    vector<int> vec(n+1);
    vector<int> ans(n+2);
    for (int i = 1; i <= n; i++)
    {
        cin>>vec[i];
    }
    ans[1]=vec[1];
    ans[n+1]=vec[n];
    for (int i = 2; i <=n; i++)
    {
        ans[i]=lcm(vec[i],vec[i-1]);
    }
    for(int i=1;i<=n;i++)
    {
        if(vec[i]!=gcd(ans[i],ans[i+1]))
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

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
    int t ;
    cin>>t;
    while(t--)
    {
        solve();
    }
}