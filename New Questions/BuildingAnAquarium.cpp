#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool checker(long long int target,long long int x, vector<long long int> & vec,long long int n)
{
    long long int w=0;
    for(int i=0;i<n;i++)
    {
        if(target-vec[i]>0)w+=target-vec[i];
    }
    if(w<=x)return true;
    return false;
}
void solve()
{
    long long int n , x;
    cin>>n>>x;
    vector<long long int> vec(n);
    long long int small=INT_MAX,large=INT_MIN;
    for(int i=0;i<n;i++)

    {
        cin>>vec[i];
        small=min(small,vec[i]);
        large=max(large,vec[i]);
    }
    long long int mid,ans=0;
    large+=x;
    while(small<=large)
    {
        mid=small +(large-small)/2;
        if(checker(mid,x,vec,n))
        {
            ans=mid;
            small=mid+1;
        }
        else
        {
            large=mid-1;
        }
    }
    cout<<ans<<endl;

    
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