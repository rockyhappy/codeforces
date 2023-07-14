/**
 * This is a question from codeforces and the solution for the same 
 * The question link is 
 * https://codeforces.com/contest/1481/problem/B
 * 
 * The solution link is 
 * https://codeforces.com/contest/1481/submission/212920821
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
        int n , k,flag=-1,flag2=0;
        cin>>n>>k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin>>vec[i];
       
      
        for (int i = 0; i < k; i++)
        {
            flag2=0;
            for (int j = 1; j < n; j++)
            {
                if(vec[j]>vec[j-1])
                {
                    if(i==k-1)
                    {
                         cout<<j<<endl;
                         flag=1;
                    }
                    vec[j-1]++;
                    flag2=1;
                    break;
                }
            }
            if(flag2==0)
            {
                cout<<-1<<endl;
                break;
            }
        }
        
    
        
    }
}