#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    long long int n,k;
    cin>>n>>k;
    vector<long long int> arr(n);
    for (long long int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int pointer =0;
    int cnt=0;
    for (int i = n-1; i >=0; i--)
    {
        if(arr[i]>k)
        {
            cnt++;
            pointer++;
        }
        else if(arr[i]<=k)
        {
            int x=k/arr[i];
            x+=1;
            pointer+=x;
            if(pointer>n)
            {
                break;
            }
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
}
int main()
{
 
   fastio(); 
    // int t ;
    // cin>>t;
    // while(t--)
    // {
        solve();    
    // }
}