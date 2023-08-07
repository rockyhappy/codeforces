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
        vector<int> vec(n+1);
        long long int sum=0;
        for (int i = 1; i <=n; i++)
        {
            cin>>vec[i];
            sum+=vec[i];
        }
        if(n==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
         int count=0,flag=0;
        for(int i =1;i<=n;i++)
        {
           if(vec[i]==1)
           {
            sum-=2;
           }
           else
           {
            sum-=(1);
           }
        }
        if(sum<0)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
        }
        
        
    }
}