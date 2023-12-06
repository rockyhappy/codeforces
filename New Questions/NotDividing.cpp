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
    int n ;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    int count=2*n;
    if(vec[0]==1)
    {
        vec[0]=2;
        count-=1;
    }
    for (int i = 1; i < n; i++)
    {
        if(vec[i]==1)
        {
            vec[i]+=1;
            count-=1;
        }
        if(vec[i]%vec[i-1]==0)
        {
            vec[i]++;
            count--;
        }
    }
    for (int i = 0; i < n; i++)
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