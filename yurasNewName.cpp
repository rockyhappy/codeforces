/**
 * This is a codeforces contest problem and the solution to the 
 * problem is as follows and the problem link is 
 * https://codeforces.com/contest/1820/problem/A#
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int length=str.length(),count=0;
        for(int i=0;i<length-1;i++)
        {
            if(str[i]=='_'&&str[i+1]=='_')
                count++;
            if((i==0||i==length-1)&&str[i]=='_'&&length!=1)
            count++;

        }
        if(str[length-1]=='_'&&length!=1)
            count++;

        if(length==1&&str[0]=='_')
        count+=2;
        if(length==1&&str[0]=='^')
        count++;
        cout<<count<<endl;
    }
    return 0;
}