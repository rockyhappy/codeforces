#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int maxCoins(const string& path, int position) {
    if (position >= path.length()) {
        return 0; 
    }

    if (path[position] == '*') {
        return 0; 
    }

    int coinsFromHere = (path[position] == '@') ? 1 : 0;

    int coinsFromOneStep = maxCoins(path, position + 1);

    int coinsFromTwoSteps = maxCoins(path, position + 2);
    return coinsFromHere + max(coinsFromOneStep, coinsFromTwoSteps);
}

// void solve()
// {
//     int n ;
//     cin>>n;
//     string str;
//     int ans=0,mxans=0;
//     res(n,0,str,ans,mxans);
// }
int main()
{
 
   fastio(); 
    int t ;
    cin>>t;
    while(t--)
    {
       int n;
        cin >> n;
        string path;
        cin >> path;

        cout << maxCoins(path, 0) << endl;
    }
}