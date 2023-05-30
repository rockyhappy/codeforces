/**
 * This is a question from codeforces and 
 * the solution for the same, The problem link
 * https://codeforces.com/problemset/problem/227/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int a[m],sum1=0,sum2=0;
    for (int  i = 0; i < m; i++)
    {
        cin>>a[i];
        for (int j = 0; j < n; j++)
        {
            
            if(arr[j]==a[i])
            {
                sum1+=j+1;
                sum2+=n-j;
                break;
            }

        }

        
        
    }
        cout<<sum1<<" "<<sum2<<endl;
    
    
}