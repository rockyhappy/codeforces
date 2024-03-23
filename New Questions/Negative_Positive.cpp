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
    int cnt_pos=0,cnt_neg=0,cnt_zero=0;
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        if(vec[i]<0)
        {
            cnt_neg++;
        }
        else if(vec[i]==0)
        {
            cnt_zero++;
        }
        else if(vec[i]>0)
        {
            cnt_pos++;
        }
        sum+=abs(vec[i]);
        vec[i]=abs(vec[i]);
    }
    if(cnt_zero!=0)
    {
        cout<<sum<<endl;
        return;
    }
    if(cnt_pos==n)
    {
        cout<<sum<<endl;
        return;
    }
    if(cnt_neg%2==0)
    {
        cout<<sum<<endl;
        return;
    }
    sort(vec.begin(),vec.end());
    cout<<sum-2*vec[0]<<endl;


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