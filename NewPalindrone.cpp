/**
 * This is a codeforces problem and the solution 
 * for the same, the link for the problem is
 * https://codeforces.com/contest/1832/problem/A
*/
#include <bits/stdc++.h>
#include<typeinfo>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int> mp;
        for (int i = 0; i < s.length(); i++)
        {
           mp[s[i]]++;
        }
        int count=0,flag=0;
        for(auto i: mp)
        {
            count++;
            if(i.second==1)
                flag=1;
        }
        if(count==1)
            cout<<"NO"<<endl;
        else if(flag==1&&count<=2)
            cout<<"NO"<<"\n";
        else 
            cout<<"YES"<<endl;
    }
}