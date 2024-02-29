#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool isPrime(long long int n)
{
    if(n==1) return false;
    for(long long int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
long long int highestFactorOfNumber(long long int n)
{
    long long int ans=0;
    for(long long int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ans=max(ans,i);
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n>1) ans=max(ans,n);
    return ans;
}
void solve()
{
    long long int l,r;
    cin>>l>>r;
    if(r<=3)
    {
        cout<<-1<<endl;
        return;
    }
    if(isPrime(r) )
    {
        if(r>l)
        {
            long long int ans = highestFactorOfNumber(r-1);
            cout<<ans<<" "<<r-1-ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        
    }
    else{
        long long int ans=highestFactorOfNumber(r);
        long long int ans2=r-ans;
        cout<<ans2<<" "<<r-ans2<<endl;
        return;

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