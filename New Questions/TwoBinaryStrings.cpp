/**
 * This is a codeforces question and the solution for the same 
 * the question link 
 * https://codeforces.com/problemset/problem/1861/B
 * 
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int n = str1.size();
    int mark=n;
    for (int i = 0; i < n-1; i++)
    {
        if(str1[i]==str2[i] && str1[i+1]==str2[i+1] && str1[i]=='0' && str1[i+1]=='1')
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;

}
int main()
{
        fastio();
    int t ;
    cin>>t;
    while(t--)
    {
        solve()      ;     
    }
}