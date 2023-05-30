/**
 * this is a problem from codeforces and the solution for 
 * the same. the problem link is 
 * https://codeforces.com/problemset/problem/339/A
*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int length;
    string str,str2="";
    cin>>str;
    length=str.length();
    int countOne=0,countTwo=0,countThree=0;
    if(length==1)
    {
        cout<<str<<endl;
        return 0;
    }
    for (int  i = 0; i < length; i+=2)
    {
        if(str[i]=='1')
            countOne++;
        if(str[i]=='2')
            countTwo++;
        if(str[i]=='3')
            countThree++;
    }
    //cout<<countOne<<" "<<countTwo<<" "<<countThree;
    if(countOne>0)
    for (int i = 0; i < countOne; i++)
    {
        str2+="1+";
    }
    if(countTwo>0)
    for (int i = 0; i < countTwo; i++)
    {
        str2+="2+";
    }
    if(countThree>0)
    for (int i = 0; i < countThree; i++)
    {
        str2+="3+";
    }
    length=str2.length();
    cout<<str2.substr(0,length-1)<<endl;
    return 0;

    
}