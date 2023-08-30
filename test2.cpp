#include<iostream>
#include<map>
#include<vector>
#include<math.h>
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
        int n ;
        cin>>n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
          cin>>vec[i];
        }
        vector<int> vec2;
        vec2.push_back(vec[0]);
        for (int i = 1; i < n; i++)
        {
            if(vec[i]>=vec[i-1])
            {
              vec2.push_back(vec[i]);
            }
            else
            {
              vec2.push_back(vec[i]);
              vec2.push_back(vec[i]);
              
            }
        }
        cout<<vec2.size()<<endl;
        for(int i =0;i<vec2.size();i++)
        {
          cout<<vec2[i]<<" ";
        }
        cout<<endl;
    }
}