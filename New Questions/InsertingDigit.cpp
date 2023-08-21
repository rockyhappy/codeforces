/**
 * This is a codeforces question and the solution for the same 
 * The question link is as follows
 * https://codeforces.com/contest/1811/problem/A
 * 
 * the solution link fo the same is
 * https://codeforces.com/contest/1811/submission/219801895
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
    int t ;
    cin>>t;
    while(t--)
    {
        int n ,k,flag=0;
        cin>>n>>k;
        string str;
        cin>>str;
        for (int i = 0; i < n; i++)
        {
            if(str[i]-'0'<k && flag==0){
                cout<<k;
                flag=1;
            }
            cout<<str[i];
        }
        if(flag==0)cout<<k;
        cout<<endl;
    }
}