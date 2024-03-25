#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
long long int modulo(long long int x) { long long int m=1000000007;return (x % m + m) % m;}

long long int countBinaryInversions(vector<int> vec)
{
    int n=vec.size();
    int cntZero=0,cntOne=0;
    long long int ans=0;
    for (int  i = 0; i < n; i++)
    {
        if(vec[i]==0)
        {
            ans+=cntOne;
            cntZero++;
        }
        else
        {
            cntOne++;
        }
    }
    return ans;
}

void solve()
{
    
    int n;
    cin>>n;
    vector<int> vec(n);
    
    int lastOne=-1, firstOne=-1, lastZero=-1, firstZero=-1;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    for (int  i = 0; i < n; i++)
    {
        if(vec[i]==1)
        {
            if(firstOne==-1)
            {
                firstOne=i;
            }
            lastOne=i;
        }
        else
        {
            if(firstZero==-1)
            {
                firstZero=i;
            }
            lastZero=i;
        }
    }
    if(lastOne==-1 || firstOne==-1 || lastZero==-1 || firstZero==-1)
    {
        cout<<n-1<<endl;
        return;
    }
    
    
    long long int ans=0;
    vec[firstZero]=1;
    ans=max(ans,countBinaryInversions(vec));
    vec[firstZero]=0;
    vec[lastOne]=0;
    ans=max(ans,countBinaryInversions(vec));
    vec[lastOne]=1;
    ans=max(ans,countBinaryInversions(vec));
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