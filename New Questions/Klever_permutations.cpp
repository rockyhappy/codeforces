#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
     int n,k;
    cin>>n>>k;
    int a[n+1];
    a[0] = k;
    int high = n , low = 1;
    for(int i=1;i<=k;i++){
        for(int j=i;j<=n;j+=k){
            if(i % 2 == 1){
                a[j] = high;
                high--;
            }else {
                a[j] = low;
                low++;
            }
        }
    }
 
    
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
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