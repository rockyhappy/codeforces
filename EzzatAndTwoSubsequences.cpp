/**
 * This is a codeforces question and the slution for the same 
 * The question link is as follows
 * https://codeforces.com/problemset/problem/1557/A
 * 
 * The solution for the same is 
 * https://codeforces.com/contest/1557/submission/215492330
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include <iomanip>
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
        long long int sum=0,largest=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
            if(largest<vec[i])
                largest=vec[i];
            sum+=vec[i];
        }
        sum-=largest;
        std::cout << std::setprecision(9) << std::fixed;
        double alpha=sum/(double)(n-1);
        cout<<alpha+largest<<endl;
    }
}