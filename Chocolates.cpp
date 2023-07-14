/**
 * This is a codeforces question and the solution for the same 
 * the question  link for the same is 
 * https://codeforces.com/contest/1139/problem/B
 * 
 * The solution link for the same is 
 * https://codeforces.com/contest/1139/submission/212038011
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
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long int sum=0;
    int element=arr[n-1];
    sum=arr[n-1];
    for (int i = n-2; i >=0; i--)
    {
        if(element==0)
            continue;
        if(arr[i]<element)
            {
                sum+=arr[i];
                element=arr[i];
            }
        else if(arr[i]>=element)
            {
                sum+=element-1;
                element--;
            }
        
    }
    cout<<sum<<endl;
    return 0;

    
}