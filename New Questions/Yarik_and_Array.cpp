#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int maxSubArray(vector<int>& vec, int i,int j) {
        int sum=0,maximum=INT_MIN;
    for(;i<=j;i++)
    {
        int a=vec[i];
        sum+=a;
        maximum=max(maximum,sum);
        if(sum<0)sum=0;
    }
    return maximum;
    }
void solve()
{
    int n ;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum=0,maximum=INT_MIN;
    int ptr=0;
    for(int i=0;i<n-1;i++)
    {
        if(abs(arr[i]%2)==abs(arr[i+1]%2))
        {
            maximum=max(maximum,maxSubArray(arr,ptr,i));
            ptr=i+1;
        }
    }
    maximum=max(maximum,maxSubArray(arr,ptr,n-1));
    cout<<maximum<<endl;
    
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
