/**This is a codefroces question and the solution for the same 
 * The question link for the same is
 * https://codeforces.com/contest/1877/problem/A
 * The solution for the same is
 * https://codeforces.com/contest/1877/submission/227527818
*/
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
      long long int sum=0;
      for (int i = 0; i < n-1; i++)
      {
        int a;
        cin>>a;
        sum+=a;
        
      }
        cout<<(-1*sum)<<endl;
    }
}