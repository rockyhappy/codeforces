#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1="";
    cin>>s;
    int length = s.length();
    for(int i=0;i<length;i++)
    {
        if(s[i]=='.')
        {
            s1=s1+'0';
        }
        else
        if(s[i]=='-'&&s[i+1]=='.')
        {
            s1=s1+'1';
            i++;
        }
        else
        {
            s1=s1+'2';
            i++;
        }
    }
    cout<<s1<<endl;
    return 0;

}