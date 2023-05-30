/**
 * This is a codeforces contest problem and the solution 
 * for the same, the question link for the same is 
 * https://codeforces.com/contest/1826/problem/A
 * 
 * This solution is wrong and find the correct solution
*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],Liars=0;
        map<int ,int  >mp;
        for (int  i = 0; i < n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(auto i: mp)
        {
            cout<<mp.size()<<endl;
            if(mp.size()-i.first<0)
            {
                Liars+=i.second;
            }
        }
        if(Liars==n)
            cout<<-1<<endl;
        else if(Liars==0)
            cout<<0<<endl;
        else 
            cout<<Liars<<endl;

        // if(mp.rbegin()->second==n&&mp.rbegin()->first!=0)
        // cout<<-1<<endl;
        // else if(mp.rbegin()->second==n&&mp.rbegin()->first==0)
        // cout<<0<<endl;
        // else cout<<n-mp.rbegin()->second<<endl;
    }
}