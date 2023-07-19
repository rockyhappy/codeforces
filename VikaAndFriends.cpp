/**
 * This is a question from codeforces and the solution for the same 
 * The question link for the same is
 * https://codeforces.com/contest/1848/problem/A
 * 
 * The solution link for the same is
 * 
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
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
        int n,m,k;
        cin>>n>>m>>k;
        int a,b,flag=0;
        cin>>a>>b;
        for (int i = 0; i < k; i++)
        {
            int c,d;
            cin>>c>>d;
            if((a+b)%2==(c+d)%2)
                flag=1;
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}