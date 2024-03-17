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
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    if(n==1)
    {
        cout<<((vec[0]==1)?"YES":"NO")<<endl;
        return;
    }
    sort(vec.begin(),vec.end());
    long long int sum=1;
    for(int i=1;i<n;i++)
    {
        if(vec[i]>sum)
        {
            cout<<"NO"<<endl;
            return;
        }
        sum+=vec[i];

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