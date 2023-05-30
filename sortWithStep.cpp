/**
 * This is a codeforces question and the solution for
 * the same the link for the same question is 
 * https://codeforces.com/contest/1823/problem/B
 * 
 * This is upsolving for a past contest
 * 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define vec vector
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n],flag=0;
        for (int  i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(abs(i+1-arr[i])%k!=0)
                {
                    flag++;

                }
                
        }
        if(flag==0) cout<<0<<endl;
        else
        if(flag==2)cout<<1<<endl;
        else cout<<-1<<endl;
        
    }
}