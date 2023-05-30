/**
 * This is a problem from codeforces and 
 * the soltion from the same 
 * https://codeforces.com/problemset/problem/141/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s;
    cin>>s1;
    cin>>s2;
    if(s.length()+s1.length()!=s2.length())
    {
        cout<<"NO"<<endl;
        return  0;
    }
    for (char i = 'A'; i <='Z'; i++)
    {
        int count0=0,count1=0,count2=0;
        count0=count(s.begin(),s.end(),i);
        count1=count(s1.begin(),s1.end(),i);
        count2=count(s2.begin(),s2.end(),i);
        if(count0+count1!=count2)
        {
            cout<<"NO"<<endl;
            return 0;

        }

    }
    cout<<"YES"<<endl;
    return 0;
    
}