#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n+1);
    priority_queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    long long int sum=0;
    for (int i = 1; i <= n; i++)
    {
        if(a[i]!=0)
        {
            q.push(a[i]);    
        }
        else{
            if(!q.empty())
            {
                sum+=q.top();
                q.pop();
            }
    
        }
    }
    cout<<sum<<endl;

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