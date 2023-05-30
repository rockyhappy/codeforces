#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n =s.length(),flag=0;
        for (int  i = 0; i < n-1; i++)
        {
            if(s[i]!=s[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<n-1<<endl;
        else
            cout<<-1<<endl;
        
    }
    return 0;
}