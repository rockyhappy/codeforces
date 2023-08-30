/** This is a codeforces question and the solution for then same 
 * the question link for the same is
 * https://codeforces.com/contest/1811/problem/B
 * 
 * The solution for the same is 
 * https://codeforces.com/contest/1811/submission/219808021
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
        int n,x1,y1,x2,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        // now take out the layer count for the first pos
        int layer1=min(x1,min(y1,min(n+1-x1,n+1-y1)));
        int layer2=min(x2,min(y2,min(n+1-x2,n+1-y2)));
        cout<<abs(layer1-layer2)<<endl;
    }
}