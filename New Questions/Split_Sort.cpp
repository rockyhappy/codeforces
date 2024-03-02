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
    vector<int> arr(n);
    int mark = 0;
    int cnt=0;
    set<int>st;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            st.insert(arr[i]);
            continue;
        }
        else{
            if(st.find(arr[i]-1)==st.end())
            {
                cnt++;
            }
            st.insert(arr[i]);
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