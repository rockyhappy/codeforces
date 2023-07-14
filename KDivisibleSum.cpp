/**
 * This is a codeforces question and the solution for the same
 * The question link is given below
 * https://codeforces.com/contest/1476/problem/A
 * 
 * The solution link is given below
 * https://codeforces.com/contest/1476/submission/213759531
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
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(n<=k)
        {
            cout<<(n+k-1)/n<<endl;
            
        }
        else
        {
            long long int x= (n+k-1)/k;
            k*=x;
            cout<<(n+k-1)/n<<endl;
            
        }
        
    }

}