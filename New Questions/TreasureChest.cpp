#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    int sum=k + x;
    if(x>=y)
    {
        cout<<x<<endl;
        return ;
    }
    else {

        if(x+k==y)
        {
            cout<<x+k<<endl;
            return;
        }
        else if(x+k<y){
            cout<<(x+k)+(2*(y-x-k))<<endl;
            return;
        }
        else if(x+k>y){
            cout<<y<<endl;
            return ;
        }
    }
}
int main()
{
    // #ifndef ONLINE_JUDGE
    //     // for getting input from input.txt
    //     freopen("input.txt", "r", stdin);
    //     // for writing output to output.txt
    //     freopen("output.txt", "w", stdout);
    //     #endif
        fastio();
    int t ;
    cin>>t;
    while(t--)
    {
        solve();           
    }
}