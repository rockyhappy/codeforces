#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    long long int n, x;
    cin>>n>>x;
    vector<long long int> a(n);
    for (long long int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long int lower_range=a[0]-x, upper_range=a[0]+x;
    long long int count=0;
    for (long long int i = 1; i < n; i++)
    {
        long long int temp_lr=a[i]-x, temp_ur=a[i]+x;
        if(temp_lr>upper_range || temp_ur<lower_range)
        {
            count++;
            lower_range=a[i]-x;
            upper_range=a[i]+x;
            continue;
        }
        if(temp_lr>lower_range)
        {
            lower_range=temp_lr;
        }
        if(temp_ur<upper_range)
        {
            upper_range=temp_ur;
        }
    }
    cout<<count<<endl;
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