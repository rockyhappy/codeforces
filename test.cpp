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
      int n ,m ;
      cin>>n>>m;
      vector<string> vec(n);
      for(int i=0;i<n;i++)
      {
        cin>>vec[i];
      }
      string str="vika";
      int ind=0,flag=0;
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
            if(flag==0 && vec[j][i]==str[ind])
            {
                ind++;
                if(ind==4)
                flag=1;
                break;
            }
        }
      }
      if(flag==1)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}

