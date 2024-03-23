#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

long long int modulo(long long int x, long long int m) {
    return (x % m + m) % m;
}

long long int kadane(vector<long long int> vec)
{
    long long int max_sum=LONG_LONG_MIN;
    long long int sum=0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum+=vec[i];
        max_sum=max(max_sum,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    return max_sum;
}



void solve2() {
    int n, k;
    cin >> n >> k;
    vector<long long int> vec(n);
    long long int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        total += vec[i];
        total %= 1000000007;
    }
    long long int sum = kadane(vec);
    sum = max(sum, 0LL);
    long long int ans = 0;

    if (k > 0) {
        long long int power = 1;
        for (int i = 0; i < k; i++) {
            power = (power *1ll* 2) % 1000000007;
        }
        power--;
        power %= 1000000007;
        ans = (sum *1ll* power)%1000000007;
        ans %= 1000000007;
    }

    cout << modulo((ans + total), 1000000007) << endl;
}
void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long int> vec(n);
    long long int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        total += vec[i];
        total %= 1000000007;
    }
    long long int sum = kadane(vec);
    sum = max(sum, 0LL);
    long long int ans = sum;

    for (int i = 0; i < k; i++) {
        ans *= 2;
        ans %= 1000000007; 
    }

    ans -= sum;
    ans %= 1000000007; 

    ans += total;
    ans %= 1000000007; 

    cout << modulo(ans, 1000000007) << endl;
}


int main()
{
 
   fastio(); 
    int t ;
    cin>>t;
    while(t--)
    {
        solve();    
    }
}