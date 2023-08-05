/**
 * This is a codeforces question and the solution for the same 
 * The question link for the same question is 
 * https://codeforces.com/contest/1343/problem/B
 * 
 * The solution for the same is
 * https://codeforces.com/contest/1343/submission/217032435
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
        if((n/2)%2!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        vector<int> vec(n);
        int camp=0;
        for(int i =0;i<n/2;i++)
        {
            vec[i]=2*(i+1);
            camp+=vec[i];
        }
        for(int i =n/2;i<n;i++)
        {
            vec[i]=vec[i-n/2]-1;
            if(i!=n-1)
            camp-=vec[i];
            if(i==n-1)
            vec[i]=camp;

        }
        for (int i = 0; i < n; i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;   
    }
}