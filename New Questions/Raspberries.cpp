/**
 * This is a Codeforces Question and the solution for the same
 * the question Link 
 * 
*/
#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    if(k&1)
    {
        //k is odd
        int mn=INT_MAX;
        for(int i = 0; i < n; ++i)
        {
            if(a[i]%k==0)
            {
                cout<<0<<endl;  
                return;
            }
            mn=min(mn,k-(a[i]%k));
        }
        cout<<mn<<endl;
    }
    else
    {
       //k is even
       if (k==2)
       {
        //count the number of even elements
        int cnt=0;
        for(int i = 0; i < n; ++i)
        {
            if(a[i]%2==0)
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        
        }
       }
         else
         {
              //k is 4 count even if only one even then answer is one else 2
              int mn=INT_MAX;
        for(int i = 0; i < n; ++i)
        {
            if(a[i]%k==0)
            {
                cout<<0<<endl;  
                return;
            }
            mn=min(mn,k-(a[i]%k));
        }
                int cnt=0;
                for(int i = 0; i < n; ++i)
                {
                    if(a[i]%2==0)
                    {
                        cnt++;
                    }
                    if(a[i]%4==0)
                    {
                        cout<<0<<endl;
                        return;
                    }
                }
                if(cnt==1)
                {
                    cout<<min(1,mn)<<endl;
                }
                else if(cnt>1)
                {
                    cout<<0<<endl;
                }
                else if(cnt==0)
                {
                    cout<<min(2,mn)<<endl;
                }
        }
    
    }
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