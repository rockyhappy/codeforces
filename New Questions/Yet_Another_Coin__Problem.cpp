#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int recurs(int n)
{
    int ans=0;
    switch(n)
    {
        case 0: { ans=0; break; }
        case 1: { ans=1; break; }
        case 2: { ans=2; break; }
        case 3: { ans=1; break; }
        case 4: { ans=2; break; }
        case 5: { ans=3; break; }
        case 6: { ans=1; break; }
        case 7: { ans=2; break; }
        case 8: { ans=3; break; }
        case 9: { ans=2; break; }
        case 10: { ans=1; break; }
        case 11: { ans=2; break; }
        case 12: { ans=2; break; }
        case 13: { ans=2; break; }
        case 14: { ans=3; break; }
        case 15: { ans=1; break; }
    }
    if(n>15)
    {
        ans+=min(recurs(n-15),min(recurs(n-10),min(recurs(n-6),min(recurs(n-3),recurs(n-1)))))+1;
    }
    return ans;
}
void solve()
{
    int n;
    cin>>n;
    int cnt=0;
    if(n>35)
    {
        int temp=n%15;
        cnt+=n/15;
        cnt--;
        cout<<cnt+recurs(temp+15)<<endl;
    }
    else
    {
        cout<<recurs(n)<<endl;
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