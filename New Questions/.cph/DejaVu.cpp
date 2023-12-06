/** This is a codeforces question and the solution for the same 
 * The question link for the same is 
 * 
 *  the solution link for the same is 
 * 
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
    vector<int> vec(n);
    vector<int> vec1;
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    for (int i = 0; i < q; i++)
    {
        int a;
        cin>>a;
        if(mp[a]==0)
            vec1.push_back(a);
        mp[a]++;

    }
    q=vec1.size();
    for (int i = 0; i < q; i++)
    {
        //cout<<pow(2,vec1[i])<<" ";
        int pw=pow(2,vec1[i]);
        for (int j = 0; j < n; j++)
        {
            if(vec[j]%pw==0)
            {
                vec[j]+=pow(2,vec1[i]-1);
            }
        }
        
    }
    for(int i=0;i<n;i++)
      {
        cout<<vec[i]<<" ";
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
