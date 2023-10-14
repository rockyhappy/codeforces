#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
  int n ;
  cin>>n;
  vector<vector<char>> vec(n,(vector<char>(n) ));
  vector<vector<char>> vec2(n,(vector<char>(n) ));
  for (int i = 0; i < n; i++)
  {
      for (int j = 0; j < n; j++)
      {
        cin>>vec[i][j];
      }
  }
  for (int i = 0; i < n; i++)
  {
      for (int j = 0; j < n; j++)
      {
        vec2[i][j]=vec[j][i];
      }
  }
  for (int i = 0; i < n; i++)
  {
    reverse(vec2[i].begin(),vec2[i].end());
  }

  // for (int i = 0; i < n; i++)
  // {
  //     for (int j = 0; j < n; j++)
  //     {
  //       cout<<vec2[i][j]<<" ";
  //     }
  //     cout<<endl;
  // }
  int cnt=0;
  for(int k=0;k<n;k++)
  {
    label:
  for (int i = 0; i < n; i++)
  {
      for (int j = 0; j < n; j++)
      {
        if(vec[i][j]==vec2[i][j])continue;
       if(vec2[i][j]!=vec[i][j])
       {
          cnt+=abs(vec[i][j]-vec2[i][j]);
          vec2[i][j]=max(vec[i][j],vec2[i][j]);
          vec2[j][n-i-1]=vec2[i][j];
          // cout<<vec[i][j];
          //goto label;
       }
      //  else if(vec2[i][j]>vec[i][j])
      //  {
      //   cnt+=vec2[i][j]-vec[i][j];
      //     vec[i][j]=vec2[i][j];
      //     vec[j][n-i-1]=vec2[i][j];
      //     goto label;
      //  }
      }
      // cout<<endl;
  }
  }
  // for (int i = 0; i < n; i++)
  // {
  //     for (int j = 0; j < n; j++)
  //     {
  //       cout<<vec2[i][j]<<" ";
  //     }
  //     cout<<endl;
  // }
  cout<<cnt<<endl;
}
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
      solve();
    }
}

