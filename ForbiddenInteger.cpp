/**
 * This is a codeforces question and the solution for the same 
 * The question link for the same 
 * https://codeforces.com/contest/1845/problem/A
 * 
 * The Solution for the same is 
 * https://codeforces.com/contest/1845/submission/216087957
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
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1&&k!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for (int i = 0; i < n; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
            continue;
        }
        if(x==1&&k==1)
        {
            cout<<"NO"<<endl;
        }
        if(x==1&&k!=1)
        {
            if(n%2==0)
            {
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i=2;i<=n;i+=2)
                {
                    cout<<2<<" ";
                }
                cout<<endl;
                }
                else{
                    if(k<3)
                    {
                        cout<<"NO"<<endl;
                    }
                    else
                    {
                        cout<<"YES"<<endl;
                        cout<<n/2<<endl;
                        for(int i =2;i<=n-3;i+=2)
                        {
                            cout<<2<<" ";
                        }
                        cout<<3<<endl;
                    }
                }
            
        }
    }
}