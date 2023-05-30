#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    string s,str="";
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]!=s[i+1])
            str+=s[i];
    }
    str+=s[n-1];
    cout<<s.length()-str.length()<<endl;
    return 0;
}