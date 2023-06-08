/**
 * This is a question from codeforces and the
 * solution for the same, the question link is 
 * https://codeforces.com/contest/1840/problem/C
 * 
 * the solution link for lakshay code is 
 * https://codeforces.com/contest/1840/submission/208785660
 * 
 * The solution link for my code is 
 * https://codeforces.com/contest/1840/submission/209018056
 * 
 * 
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main ()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif
        fastio();
    long long int t;
    cin>>t;
    while(t--)
    {
         long long int n,k,q;
        cin>>n>>k>>q;
        long long int arr[n];
        vector <int> store;
        long long int streak =0;
        for (long long int  i = 0; i < n; i++)
        {
            cin>>arr[i];
             if(arr[i]<=q)streak++;
            else {
                store.push_back(streak);
                streak=0;
            }
        }
        long long int count=0,steak=0,hex=0;
        for(long long int i=0;i<n;i++)
        {
            if(arr[i]<=q)   steak++;
            else          {  steak=0; hex=0;}
            if(steak>=k){
                count+=++hex;
            }
        }
    //      long long int count = 0;
    // long long int consecutive = 0;
    // long long int temp=0;
    // for (long long int i = 0; i < n; i++) {
    //     if (arr[i] <= q) {
    //         consecutive++;
    //     } else {
    //         consecutive = 0;
    //         temp=0;
 
    //     }
        
    //     if (consecutive >= k) {
    //         count += (temp+1);
    //         temp++;
    //     }
    // }
        cout<<count<<endl;
    }
    return 0;
}