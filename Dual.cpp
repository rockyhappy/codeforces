/**
 * This is a codeforces question and the solution for the same 
 * The question link form the same is 
 * https://codeforces.com/contest/1855/problem/C1
 * 
 * The solution for the same is
 * https://codeforces.com/contest/1855/submission/217131776
*/
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
        int n ;
        cin>>n;
        vector<int> vec(n+1);
        int neg=0,pos=0,in=0,mx=INT_MIN;
        for (int i = 1; i <=n; i++)
        {
            cin>>vec[i];
            if(vec[i]>=0)pos++;
            if(vec[i]<=0)neg++;
            if(vec[i]>mx)
            {
                mx=vec[i];
                in=i;
            }
        }
        
        // int nummax=INT_MIN,nummin=INT_MAX;
        // for (int  i = 0; i < n; i++)
        // {
        //     nummax=max(vec[i],nummax);
        //     nummin=min(vec[i],nummin);
        // }
        
        if(pos==n)
        {
            //This means that all the elements of the given array are positive
            cout<<n-1<<endl;
            for(int i =2;i<=n;i++)
            {
                cout<<i<<" "<<i-1<<endl;
            }
        }
        else if(neg==n)
        {
            //This means that all the elements are negative 
            //To solve such a problem use prefix sum
            cout<<n-1<<endl;
            for (int i = n; i >=2; i--)
            {
                cout<<i-1<<" "<<i<<endl;
            }
            
        }
        else
        {
            
            vector<pair<int ,int>>vp;
        
            while(vec[in]<=20)
            {
                vp.push_back({in,in});
                vec[in]*=2;
            }
            
            for (int  i = 1; i <=n; i++)
            {
                vp.push_back({i,in});  
            }
            
            for(int  i=2;i<=n;i++){
            vp.push_back({i,i-1});
            }
 
 
        cout<<vp.size()<<endl;
        for(auto i:vp){
            cout<<i.first<<" "<<i.second<<endl;
        }
        }
    }
}