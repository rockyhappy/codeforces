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
    vector<vector<char>> vec(n,vector<char>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>vec[i][j];
        }
    }
    int cnt=0;
    for(int k=0;k<2;k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(vec[i][j]!=vec[j][n-i-1])
                {
                    cnt+=abs(vec[i][j]-vec[j][n-i-1]);
                    vec[i][j]=max(vec[i][j],vec[j][n-i-1]);
                    vec[j][n-i-1]=vec[i][j];
                }
            }
        }
    }
    cout<<cnt<<endl;

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