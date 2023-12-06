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
    vector<int> vec(2*n);
    for (int i = 0; i < 2*n; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int j=n+1,i=n-2,sum=0;
    while(i>-1)
    {
        sum+=abs(vec[i]-vec[i+1])+abs(vec[j]-vec[j-1]);
        i--;
        j++;
    }
    j=n;
    i=n-1;
    cout<<sum<<endl;
    while(i>-1)
    {
        cout<<vec[i--]<<" "<<vec[j++]<<endl;
    }
    
    
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     // for getting input from input.txt
    //     freopen("input.txt", "r", stdin);
    //     // for writing output to output.txt
    //     freopen("output.txt", "w", stdout);
    //     #endif
        fastio();
    int t ;
    cin>>t;
    while(t--)
    {
        solve();           
    }
}