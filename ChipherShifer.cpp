/**
 * This is a question from codeforces and the 
 * solution for the same, The question link is
 * https://codeforces.com/contest/1840/problem/A
 * 
 * the solution for the problem is
 * https://codeforces.com/contest/1840/submission/208729369
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,str="";
        cin>>s;
        //int n=s.length();
        for(int i=0;i<n;i++)
        {
            str=str+s[i];
            int j=i+1;
            while(s[i]!=s[j]){
                j++;
            }
            i=j;
        }
        cout<<str<<endl;
    }
}