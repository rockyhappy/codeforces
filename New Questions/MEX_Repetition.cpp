#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int findTheMissingNumberInThePermutation(vector<int> &arr)
{
    int n = arr.size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans^=arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        ans^=i;
    }
    return ans;
}
void solve()
{
    long long int n,k;
    cin>>n>>k;
    long long int sum=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    // long long int expectedSum = (n*1ll*(n+1))/2;
    arr.push_back(findTheMissingNumberInThePermutation(arr));
    n++;
    k%=n;
    for(int i=n-k;i<n;i++)
        cout<<arr[i]<<" ";
    for(int i=0;i<n-k-1;i++)
        cout<<arr[i]<<" ";
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