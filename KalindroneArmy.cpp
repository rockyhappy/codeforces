/**
 * This is a codeforces question and the solution for the same 
 * the question for the question is 
 * https://codeforces.com/contest/1610/problem/B
 * 
 * The solution for the question is
 * https://codeforces.com/contest/1610/submission/212708407
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool isPalin(vector<int> vec)
{
    int n=vec.size();
    for (int i = 0; i < n/2; i++)
    {
        int j=n-1-i;
        if(vec[i]!=vec[j])
            return false;
    }
    return true;
    
}
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
        vector<int > vec(n,0) ;
        for (int i = 0; i < n; i++)
        {
            //int a;
            cin>>vec[i];
            //vec.push_back(a);
        }
        int marker1=-1,marker2=-1;
        for (int i = 0; i < n; i++)
        {
            int  j=n-i-1;
            if(vec[i]!=vec[j])
            {
                marker1=vec[i];
                marker2=vec[j];
                break;
            }
        }
        if(marker1==marker2&&marker2==-1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        vector<int> vec1;
        for(int i=0;i<n;i++)
        {
            if(vec[i]!=marker1)
            {
                vec1.push_back(vec[i]);
            }
        }
        //cout<<"Hello"<<endl;
        if(isPalin(vec1))cout<<"YES"<<endl;
        else 
        {
            vec1.clear();
            for(int i=0;i<n;i++)
            {
            if(vec[i]!=marker2)
            {
                vec1.push_back(vec[i]);
            }
            }
        
         if(isPalin(vec1))cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
        }
    }
}