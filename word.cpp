#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,str="";
    cin>>s;
    int length=s.length(),countCap=0,countSmall=0;
    for(int i =0;i<length;i++)
    {
        if(s[i]>64&&s[i]<91)
            countCap++;
        else
            countSmall++;
    }
    if(countCap>countSmall)
    {
        for(int i=0;i<length;i++)
        {
            if(s[i]>96)
                s[i]-=32;
        }
    }
    else{
        for(int i=0;i<length;i++)
        {
            if(s[i]<96)
                s[i]+=32;
        }

    }
    cout<<s<<endl;
    return 0;
}