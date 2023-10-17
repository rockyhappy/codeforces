/**
 * This  is a cofdeforces question and the solution for the same 
 * The Question for the same is 
 * https://codeforces.com/contest/1807/problem/D
 * 
 * The solution for the same is
 * https://codeforces.com/contest/1807/submission/228554666
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int> vec(n+1,0);
    int sum=0,copy;
    for (int i = 1; i <=n; i++)
    {
        int a;
        cin>>a;
        sum+=a;
        vec[i]=sum;
        //cout<<vec[i]<<" ";
    }
    copy=sum;
    for (int i = 0; i < q; i++)
    {
        sum=copy;
        int l,r,k;
        cin>>l>>r>>k;
        int removed=vec[r]-vec[l-1];
        //cout<<removed<<endl;
        sum-=removed;
        sum+=(r-l+1)*k;
        if(sum&1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    
}
int main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif
        fastio();
    int t ;
    cin>>t;
    while(t--)
    {
        solve();           
    }
}