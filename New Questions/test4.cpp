#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve(){
    int n ;;
    cin>>n;
    string str;
    cin>>str;
    for (int  i = 0; i < n-1; i++)
    {
        if(str[i]!=str[i+1] && str.size()!=1)
        {
            str.erase(i,1);
            str.erase(i,1);
            if(i<=1)
            {
                i=-1;
            }
            else
            i-=2;
        }
        //cout<<str<<endl;
    }
    cout<<str.size()<<endl;
   
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