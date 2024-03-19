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
    string str;
    cin>>str;
    n=str.length();
    int cnt=0,maxStreak=0;

    for (int  i = 0; i < n; i++)
    {
        if(str[i]=='1')
        {
            cnt++;
            maxStreak=max(maxStreak,cnt);
        }
        else
        {
            cnt=0;
        }
    }
    if(maxStreak==n)
    {
        cout<<n*1ll*n<<endl;
        return;
    }
    if(str[0]=='1' && str[n-1]=='1')
    {
        int cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='1')
            {
                cnt1++;
            }
            else
            {
                break;
            }
        }
        int cnt2=0;
        for(int i=n-1;i>=0;i--)
        {
            if(str[i]=='1')
            {
                cnt2++;
            }
            else
            {
                break;
            }
        }
       maxStreak=max(maxStreak,cnt1+cnt2);
    }
    long long int ans=0;
    cnt=1;
    for(int i=maxStreak;i>0;i--)
    {
        ans=max(ans, cnt*1ll*(i));
        cnt++;
    }
    cout<<ans<<endl;
    
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