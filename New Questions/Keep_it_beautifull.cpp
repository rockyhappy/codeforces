/**
 * Title   : Keep it beautifull
 * This is a codeforces Question and the solution for the same 
 * Question Link 
 * https://codeforces.com/problemset/problem/1841/B
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
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int flag=0;
    string str="1";
    int key=vec[0],selectedAfterPeak=0,peak=0,prev=0;
    for (int i = 1; i < n; i++)
    {
        if(vec[i]>=vec[prev])
        {
            str+='1';
            prev=i;
        }
        else if(vec[i]<vec[prev] && vec[i]<=key)
        {
            //This is the first valid valley
            str+='1';
            prev=i;
            i++;
            while(i<n)
            {
                if(vec[i]>=vec[prev] && vec[i]<=key)
                {
                    str+='1';
                    prev=i;
                }
                else{
                    str+='0';
                }
                i++;
            }
            break;
        }
        else{
            str+='0';
        }
    }
    
    
    
    cout<<str<<endl;
    
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