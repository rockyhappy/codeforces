#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
        int n;
        cin>>n;
        vector<int> vec(n);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }
        int sum=0;
        
            for (int i = 0; i < n; i++)
            {
                sum^=vec[i];
            }
        if(sum==0) cout<<0<<endl;
        else if(n%2==0)cout<<-1<<endl;
        else if(sum<256)
        {
            cout<<sum<<endl;
        }
        else cout<<-1<<endl;
       
    }
}