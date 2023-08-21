/**
 * This is a codeforces question and the solution for the same
 * the question link for the same is
 * 
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
        int n;
        cin>>n;
        vector<int> vec(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>vec[i];
        }
        int flag=0;
        for (int i = 1; i <=n; i++)
        {
            if(vec[i]<=i)
            {
                flag=1;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}