#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    //reverse(str.begin(),str.end());
    int zeroCount=0;
    //vector<int> ans(n,-1);
    set<int> s;
    for(int i=0;i<n;i++)if(str[i]=='0')s.insert(i);

    long long int ans=0;
    for(int i=n-1;i>=0;i--)
    {

        if(str[i]=='1')
        {
            if(ans==-1 || s.size()==0 ) ans=-1;
            else
            {
                ans+=i- *s.rbegin();
                str[*s.rbegin()]='1';
                s.erase(--s.end());
            }
        }
        else if(s.size() && *s.rbegin()==i)
            s.erase(i);

        cout<<ans<<" ";
    }
    cout<<endl;

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