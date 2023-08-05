/**
 * This is a codeforces question and the solutionfor the same 
 * The question link is as follows
 * https://codeforces.com/contest/1853/problem/A
 * 
 * The solution link for the same is
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
        vector<int> vec(n);
        int difference=INT_MAX,index,flag=0;
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
            if(i>0&&vec[i]<vec[i-1])
            {
                flag=1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(i>0&&difference>vec[i]-vec[i-1])
            {
                difference=vec[i]-vec[i-1];
                index=i;
            }
        }
        if(flag==1)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<((vec[index]-vec[index-1])/2)+1<<endl;
    }
}