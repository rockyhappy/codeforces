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
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long int ans=0;
    long long int mn=LONG_LONG_MAX;
    long long int ans2=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            ans=0;
            mn=LONG_LONG_MAX;
            long long int sum=0;
            int cnt=0;
            for(int j=0;j<n;j+=1)
            {
                sum+=arr[j];
                cnt++;
                if(cnt==i)
                {
                    ans=max(ans,sum);
                    mn=min(mn,sum);
                    cnt=0;
                    sum=0;
                }
            }
            ans2=max(ans2,ans-mn);
        }
    }
    cout<<ans2<<endl;
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