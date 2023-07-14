/**
 * This is a codeforces question and the solution for the same 
 * The question link is given below 
 * https://codeforces.com/contest/1537/problem/C
 * 
 * The solution link is given below
 * https://codeforces.com/contest/1537/submission/212686445
 * 
 * 
 * other problems 
 * https://codeforces.com/contest/1846/problem/C
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
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        vector<int> vec;
        for (int i = 0; i < n; i++ )
        {
            int a;
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        if(n==2)
        {
            cout<<vec[0]<<" "<<vec[1]<<endl;
            continue;
        }
        int difference=INT_MAX,mark1,mark2;
        for (int i = 1; i < n; i++)
        {
            if(vec[i]-vec[i-1]<difference)
            {
                mark1=i-1;mark2=i;
                difference=vec[i]-vec[i-1];
            }
        }
        for (int i = mark2; i < n+mark2; i++)
        {
            cout<<vec[i%n]<<" ";
        }
        cout<<endl;
        
    }
}