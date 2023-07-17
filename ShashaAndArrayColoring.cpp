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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        sort(vec.begin(),vec.end());
        long long int ans=(vec[n-1]-vec[0])+(vec[n-2]-vec[1]);
        cout<<ans<<endl;
        
    }
}