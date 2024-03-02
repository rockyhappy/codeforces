#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int k,n;
    cin>>k>>n;
    vector<int> vec(k);
    vec[0]=1;
    vec[k-1]=n;
    for(int i=1;i<k-1;i++)
    {
        int x=vec[i-1]+i;
        // vec[i]=x;
        if(n-x>=k-i-1)
        {
            vec[i]=x;
        }
        else
        {
            vec[i]=n-(k-i-1);
        }
        
    }
    for(int i=0;i<k;i++)
    {
        cout<<vec[i]<<" ";
    }
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