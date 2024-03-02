#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool checker(vector<long long int> vec,long long int c,long long int n,long long int mid)
{
    long long int cnt=0;
    for (int i = 0; i < n; i++)
    {
        cnt=vec[i]+mid;
        c-=powl(cnt,2);
        if(c<0)break;
    }
    if(c>=0) return true;
    else return false;
}
void solve()
{
    long long int n , c;
    cin>>n>>c;
    vector<long long int> vec(n);
    for (long long int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    long long int low=1,high=c;
    long long int ans=0;
    while(low<=high)
    {
        long long int mid=((high-low)/2) + low;
        if(checker(vec,c,n,mid))
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        // cout<<ans<<" ";
    }
    // cout<<endl;
    cout<<ans/2<<endl;
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