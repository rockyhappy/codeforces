/**
 * This is a question from the contest of codeforces and
 * the solution for the same the question li9nk is 
 * https://codeforces.com/contest/1822/problem/A
 * 
*/
#include <bits/stdc++.h>
using namespace std;
#define vec vector
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ,m;
        cin>>n>>m;
        int arr[n],position=-1,largest=0,arr1[n];
        for (int  i = 0; i < n; i++)
            cin>>arr[i];
        for (int  i = 0; i < n; i++)
        {
            cin>>arr1[i];
            if(arr[i]<=m&&arr1[i]>largest)
            {
                position=i+1;
                largest=arr1[i];
            }
            m--;
        }
        cout<<position<<endl;
    }
}