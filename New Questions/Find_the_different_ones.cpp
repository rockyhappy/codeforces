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
    vector<int> vec1(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec1[i];
    }
    
    int q;
    cin>>q;
    vector<pair<int,int>> vec2(q);
    for (int i = 0; i < q; i++)
    {
        cin>>vec2[i].first>>vec2[i].second;
    }
    set<pair<int,int>> st;
    for (int i = 1; i < n; i++)
    {
        if(vec1[i]!=vec1[i-1])
        {
            st.insert({i-1,i});
        }
    }
    for (int i = 0; i < q; i++)
    {
        int l = vec2[i].first;
        int r = vec2[i].second;
        l--;
        r--;
        int flag=0;
        auto it = st.lower_bound({l,0});
        auto it2 = st.upper_bound({r,r});
        for(;it!=it2;it++)
        {
            if(it->first>=l && it->second<=r)
            {
                cout<<it->first+1<<" "<<it->second+1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<-1<<" "<<-1<<endl;
        }
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