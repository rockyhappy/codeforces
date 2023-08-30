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
        int n;cin>>n;
        vector<int> vec1(n-1);
        vector<int> vec2;
        for (int i = 0; i < n-1; i++)
        {
            cin>>vec1[i]; 
        }
        vec2.push_back(vec1[0]);
        for (int i = 1; i < n-1; i++)
        {
            vec2.push_back(min(vec1[i],vec1[i-1]));
        }
        vec2.push_back(vec1[n-2]);
        for (int i = 0; i < n; i++)
        {
            cout<<vec2[i]<<" ";
        }
        cout<<endl;
    }
}