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
        int nn=((n-1)*n)/2;
        vector<int> vec(nn);
        set<int> st;
        map<int,int> mp;
        for (int i = 0; i < nn; i++)
        {
            cin>>vec[i];
            st.insert(vec[i]);
            mp[vec[i]]++;
        }
        int hex=n-1;
        for (auto i:st)
        {
            while(mp[i]>0)
            { mp[i]=mp[i] -hex;
            cout<<i<<" ";
            hex--;
            
        }
        cout<<*max_element(vec.begin(),vec.end())<<endl;
    }
}

