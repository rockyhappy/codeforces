/**
 * This is a question from codeforces
 * and the solution for the same, the question link is
 * https://codeforces.com/contest/1831/problem/B
 * 
 * the solution link is 
 * https://codeforces.com/contest/1831/submission/208066485
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            cout<<n-arr[i]+1<<" ";
        }
        std:: cout<<std:: endl;
    }
}