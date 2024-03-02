#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n,m ;
    cin>>n>>m;
    vector<int> arr(n);
    vector<int> brr(m);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>brr[i];
    }
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        if(st.find(brr[i])==st.end())
        {
            long long int div=pow(2,brr[i]);
            long long int add=pow(2,brr[i]-1);
            for (int j = 0; j < n; j++)
            {
                if(arr[j]%div==0)
                {
                    arr[j]+=add;
                }
            }
            st.insert(brr[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
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