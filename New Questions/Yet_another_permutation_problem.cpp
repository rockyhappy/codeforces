/**
 * Yet another permutation problem
 * Problem Description  
 * Given an integer A of size N.
 * You are asked to create a permutation P of numbers from 1 to N (inclusive of both)
 * having the following property:
 * For every integer x from 1 to N, P[x] is the number of integers y such that
 * y < x and gcd (A[y], A[x]) > 1
 * Note: gcd(x, y) is greatest common divisor of x and y.
 * Return the lexicographically smallest permutation P.
 * NOTE: A permutation P1 is lexicographically smaller than permutation P2,
 * if at first i where P[i] and P2[i] differ, P1[i] < P2[i] holds.
 * 
 * Problem Link
 * https://codeforces.com/contest/1858/problem/C
*/
#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    set<int> s;
    int j=0;
    for (int i = 1; i <= n; i++)
    {
        if(s.find(i)==s.end())
        {
            int copy=i;
           while(copy<=n){
                s.insert(copy);
                vec[j++]=copy;
                copy*=2;
           }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    

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