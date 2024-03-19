#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void work(vector<int> & vec)
{
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
}
void print(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int find(vector<int> vec, int n)
{
    int maxLength = 0;
    int start = 0;
    int end = 0;
    int currentLength = 0;
    
    while (end < vec.size()) {
        if (vec[end] - vec[start] < n) {
            currentLength = end - start + 1;
            maxLength = max(maxLength, currentLength);
            end++;
        } else {
            start++;
        }
    }
    
    return maxLength;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    work(a);
    cout<<find(a,n)<<endl;
    

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