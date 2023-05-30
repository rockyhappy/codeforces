/**
 * This is a problem from codefdorces and the 
 * solution for the same, the problrm link for the same is 
 * https://codeforces.com/contest/1832/problem/B
 * 
 * This solution is incorrect and find and undertstand the correct 
 * solution
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        long long int n,k,sum=0;
        cin>>n>>k;
        int arr[n];
        for (int  i = 0; i < n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr,arr+n);
        int start=0,end=n-1;
        for (int  i = 0; i < k; i++)
        {
            if(arr[start]+arr[start+1]<arr[end])
                {
                    sum-=arr[start]+arr[start+1];
                    start+=2;
                }
            else
            {
                sum-=arr[end];
                end-=1;
            }

        cout<<sum<<"\n";
        }
        
    }
}