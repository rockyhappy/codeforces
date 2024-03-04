#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    long long int n,k,g;
    cin>>n>>k>>g;
    long long int temp=k*1ll*g;
    long long int temp2=((g-1)/2) *1ll *(n),coins=0;
    temp-=temp2;
    if(temp<=0)
    {
        cout<<k*1ll*g<<endl;
        return;
    }
    else{
        // cout<<temp<<endl;
        temp+=(g-1)/2;
        //now temp has the required value
        long long int temp3=temp%g;
        if(temp3<=(g-1)/2)
        {
            coins=temp/g;
        }
        else{
            coins=temp/g;
            coins++;
        }
    }
    cout<<(k*1ll*g)-(coins*g)<<endl;
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