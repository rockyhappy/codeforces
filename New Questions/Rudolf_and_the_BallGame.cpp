/**
 * This is a codeforces question and the solution for the same the answer is as follows
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
    int n,m, x;
    cin>>n>>m>>x;
    vector<pair<int,char>> a(m);
    for (int i = 0; i < m; i++)
    {
        cin>>a[i].first;
        cin>>a[i].second;
    }
    int base_element=x;
    set<int> s;
    queue<int> q;
    q.push(x);
    for (int i = 0; i < m; i++)
    {
        set<int> tempSet;
        int size=q.size();
        for (int j = 0; j < size; j++)
        {
            int temp=q.front();
            q.pop();
            if(a[i].second=='?')
            {
                if((temp+a[i].first)%n==0)
                tempSet.insert(n);
                else
                tempSet.insert((temp+a[i].first)%n);
                
                if((temp-a[i].first+n)%n==0)
                tempSet.insert(n);
                else
                tempSet.insert((temp-a[i].first+n)%n);
            }
            else if(a[i].second=='0'){
                if((temp+a[i].first)%n==0)
                tempSet.insert(n);
                else
                tempSet.insert((temp+a[i].first)%n);
            }
            else if(a[i].second=='1'){
                if((temp-a[i].first+n)%n==0)
                tempSet.insert(n);
                else
                tempSet.insert((temp-a[i].first+n)%n);
            }
        }
        for(auto it:tempSet)
        {
            // cout<<it<<" ";
            q.push(it);
            if(i==m-1)
            {
                s.insert(it);
            }
        }
        // cout<<endl;
    }
    cout<<s.size()<<endl;
    for(auto it:s)
    {
        if(it==0)
        {
            s.insert(n);
            continue;
        }
        cout<<it<<" ";
    }
    cout<<endl;
    

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