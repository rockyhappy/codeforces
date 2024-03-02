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
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(vec[i]>n ||(i!=0 && vec[i]>vec[i-1])||(i==0 && vec[i]!=n))
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    vector<int> temp=vec;
    sort(temp.begin(),temp.end());
    for(int i=0;i<n;i++)
    {
        auto it=lower_bound(temp.begin(),temp.end(),i+1);
        int index = distance(temp.begin(), it);
        index=n-index;
        if(index!=vec[i])
        {
            cout<<"NO"<<endl;
            return;
        }

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