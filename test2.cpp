#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif
        fastio();
    int t ;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        str="0"+str;
        //cout<<str;
        int n =str.length();
        int flag=0,flag2=0;
        // for (int i = 0; i <n; i++)
        // {
        //     if(flag==1)
        //     {
        //         str[i]='0';
        //         continue;
        //     }
        //     if(str[i]-'0'>=5)
        //     {
        //         flag=1;
        //         if(i==0)
        //         {
        //             str[i]='0';
        //             flag2=1;
        //         }
        //         else 
        //         {

                
        //             str[i]='0';
        //             str[i-1]=((str[i-1]-'0')+1)+'0';
        //         }
        //     }
            
        // }
        int pos=n+1;
        for(int i =n-1;i>0;i--)
        {
            if(str[i]-'0'>=5)
            {
                pos=i;
                str[i]='0';
                str[i-1]=((str[i-1]-'0')+1)+'0';
            }
        }
        for(int i =0;i<n;i++)
        {
            if(i>=pos)
            str[i]='0';
        }
        if(str[0]=='0')
        {
            for (int i = 1; i < n; i++)
            {
                cout<<str[i];
            }
            cout<<endl;
            continue;
        }
        cout<<str<<endl;
    }
}