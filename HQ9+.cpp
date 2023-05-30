/**
 * This is a codeforces problem and the solution 
 * for the same. The problem link is 
 * https://codeforces.com/problemset/problem/133/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="";
    cin>>str;
    int length =str.length();
    for (int  i = 0; i < length; i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}