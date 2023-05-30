/**
 * This is a codefoprces problem and the solution for the 
 * same, the problem link is 
 * https://codeforces.com/problemset/problem/228/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s,str="";
    cin>>s;
    if(s.length()<=10)
    {
        cout<<s<<endl;
        continue;
    }
    str+=s[0];
    str+=to_string(s.length()-2);
    str+=s[s.length()-1];
    cout<<str<<endl;
    }
    return 0;


}