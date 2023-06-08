/**
 * This is a codeforces question and the 
 * solution for the same, the question link for the same is
 * https://codeforces.com/contest/514/problem/A
 * 
 * the solution link for the problem is
 * https://codeforces.com/contest/514/submission/209029250
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
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(i==0&&s[i]=='9')continue;
        if(s[i]>='5'&&s[i]<='9')
        {
            int x=s[i]-'0';
            x=9-x;
            char ch = x+'0';
            s[i]=ch;
        }
    }
    cout<<s<<endl;
    return 0;
}

