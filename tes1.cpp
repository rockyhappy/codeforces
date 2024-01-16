#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    long long int n , f,a,b;
    cin >> n >> f>>a>>b;
    int cnt=0,cnt1=0;
    vector<long long int > vec(n+1);
    vec[0]=0;
    for (int i = 1; i <=n; i++)
    {
        cin>>vec[i];
        if((vec[i]-vec[i-1])*1ll*a<=b)
        {
            f-=((vec[i]-vec[i-1])*1ll*a);
        }
        else{
            f-=b;
        }
       
    }
    if(f>0)
    {
        cout<<"YES"<<endl;
    }
    else{
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