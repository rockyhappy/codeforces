#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool checker(int & k, vector<pair<int,int>>&vec ,int &n)
{
    for (int i = 0; i < n; i++)
    {
        
    }
    
}
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> vec;
    int mmax=0;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        mmax=max(mmax,a);
        mmax=max(mmax,b);
        vec.push_back({a,b});
    }
    int low=0,high=mmax,mid=0,ans=0;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(checker(mid,vec,n))
        {
            ans=mid;
            high=mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }
    
}
int main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif
        fastio();
    int t ;
    cin>>t;
    while(t--)
    {
        solve();           
    }
}