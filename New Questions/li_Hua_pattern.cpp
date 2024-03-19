#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> vec(n,vector<int> (n,0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(vec[i][j]!=vec[n-i-1][n-j-1])
            {
                cnt++;
            }
        }
        
    }
    cnt/=2;
    k-=cnt;
    if(k<0 || (n%2==0 && k%2==1) )
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;

    
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