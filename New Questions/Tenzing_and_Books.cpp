#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n),b(n),c(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < n; i++) cin>>b[i];
    for (int i = 0; i < n; i++) cin>>c[i];
    bool eliminateA=false,eliminateB=false,eliminateC=false;
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        
        if((int)(a[i]|x)!=x) eliminateA=true;
        if((int)(b[i]|x)!=x) eliminateB=true;
        if((int)(c[i]|x)!=x) eliminateC=true;
        if(eliminateA==false) temp.push_back(a[i]);
        if(eliminateB==false) temp.push_back(b[i]);
        if(eliminateC==false) temp.push_back(c[i]);
        
    }
    int ans=0;
    for (int i = 0; i < temp.size(); i++)
    {
        ans|=temp[i];
    }
    if(ans==x) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    


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