#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    cout<<vec[0]<<" ";
    long long int sum=vec[0];
    int odds=(vec[0]%2==0)?0:1;
    for (int i = 1; i < n; i++)
    {
        if(vec[i]&1)odds++;
        sum+=vec[i];
        int sub=odds/3;
        sub+=(odds%3==1)?1:0;
        cout<<sum-sub<<" ";
    }
    cout<<endl;
    
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