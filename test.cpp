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
      int flag=0;
      int n =str.length();
      if(n>=3)
      {
        cout<<"YES"<<endl;
        for(int i=1;i<n;i++)
        {
            if(str[i]==str[i-1])
            flag=1;
        }
        if(flag==1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"()";
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cout<<"(";
            }
            for(int i=0;i<n;i++)
            {
                cout<<")";
            }
        }
        cout<<endl;
      }
      else if(n==2)
      {
        if(str=="()")
            cout<<"NO"<<endl;
        else if(str==")(")
        {
            cout<<"YES"<<endl;
            cout<<"(())"<<endl;
        }
        else if(str=="(("||str=="))")
        {
            cout<<"YES"<<endl;
            cout<<"()()"<<endl;
        }
      }
    }
}

