#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        for (int  i = 0; i < n-1; i++)
        {
            int j=0;
            int flag =0;
            for(j=0;j<i;j++)
            {
                
                if(s[j]==s[i]&&s[j+1]==s[i+1])
                    {
                        flag=1;
                        break;
                    }
            }
            if(flag==0)
                count++;
        }
        
        cout<<count<<endl;
    }
}