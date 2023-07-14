/**
 * This is a codeforces question and the solution for the same 
 * The question link for the same is 
 * https://codeforces.com/contest/1117/problem/B
 * 
 * the solution link is 
 * https://codeforces.com/contest/1117/submission/213296943
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif
        fastio();
    int n,m,k;
    cin>>n>>m>>k;
    vector<long long int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    long long int sum=0;
    if(vec[n-1]==vec[n-2])
    {
        sum=vec[n-1]*m;
        cout<<sum<<endl;
        return 0;
    }
    long long int count=0;
    sum+=(m-(m/(k +1)))*vec[n-1];
    sum+=(m/(k +1))*vec[n-2];
    
    cout<<sum<<endl;
    
}