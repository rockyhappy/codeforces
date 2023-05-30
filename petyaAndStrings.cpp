/**
 * This is a codeforces question and the solution
 * for the same. The question link is 
 * https://codeforces.com/problemset/problem/112/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    cin>>s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s.begin(),s.end(),s.begin(),::toupper);
    for (int  i = 0; i < s.length(); i++)
    {
        if(s[i]-s1[i]!=0)
        {
            int moves=(s[i]-s1[i])/abs(s[i]-s1[i]);
            cout<<moves<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}