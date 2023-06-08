/**
 * This is a question from codeforces and 
 * the solution fore the same, the link for the question is 
 * https://codeforces.com/contest/1840/problem/B
 * 
 * the link for the solution is
 * https://codeforces.com/contest/1840/submission/208768042
 * 
 * the upper link is the solution submitted by lakshya
 * and this is the solution submited by me 
 * https://codeforces.com/contest/1840/submission/208998200
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
   
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int temp=pow(2,k);
        if(log2(n)<k)temp=n+1;
        cout<<min(temp,n+1)<<endl;
    }
}