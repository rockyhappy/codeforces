#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    vector<int> vec1(n);
    vector<int> vec2(m);
    set<int> st1,st2,st3;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        cin>>vec1[i];
        st1.insert(vec1[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin>>vec2[i];
        st2.insert(vec2[i]);
    }
    for(auto i:st1){
        if(i<=k)
        {
            st3.insert(i);
            cnt1++;
        }
    }
    for(auto i:st2){
        if(i<=k)
        {
            st3.insert(i);
            cnt2++;
        }
    }


    // cout<<cnt1<<" "<<cnt2<<endl;
    if(cnt1>=k/2 && cnt2>=k/2 && st3.size()==k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


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