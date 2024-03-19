/**
 * This is a codeforces question and the answer is as follows
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
    int n ;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    int flag=0,markFirst=0,markLast=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=b[i] && flag==0)
        {
            flag=1;
            markFirst=i;
            continue;
        }
        if(a[i]!=b[i] && flag==1)
        {
            markLast=i;
        }
    }
    sort(a.begin()+markFirst,a.begin()+markLast+1);
    for (int i = markFirst; i >0; i--)
    {
        // cout<<a[i]<<" "<<a[i-1]<<endl;
            if(a[i]>=a[i-1])
            markFirst--;
            else 
            break;
    }
    for (int i = markLast; i < n-1 ; i++)
    {
        // cout<<a[i]<<" "<<a[i+1]<<endl;
            if(a[i]<=a[i+1])
            markLast++;
            else 
            break;
    }
    
    cout<<markFirst+1<<" "<<markLast+1<<endl;
    
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