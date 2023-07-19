/**
 * This is a question from codeforces and the soltuion for the same 
 * The question link is given below
 * https://codeforces.com/contest/463/problem/B
 * 
 * the solutin link for the same is
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
    long long int n;cin>>n;
    vector<long long int> vec(n);
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    sum=vec[0];
    long long int energy=0;
    for (int i = 1; i < n; i++)
    {
        energy+=vec[i-1]-vec[i];
        if(energy<0)
        {
            sum+=abs(energy);
            energy=0;
        }
    }
    
    cout<<abs(sum)<<endl;
    return 0;
    
}