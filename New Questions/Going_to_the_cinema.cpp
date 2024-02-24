#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n ;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int cnt=0;
    int flag=0;
    if(vec[0]!=0)
    {
        cnt++;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(vec[i]<=i && flag==0 )
        {
            cnt++;
            flag=1;
            // cout<<vec[i]<<" "<<i<< " "<<cnt<<endl;
            continue;
        }
        if(flag==1 && vec[i]>i)
        {
            flag=0;
        }
    }
    cout<<cnt<<endl;



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