/**
 * This is a codeforces question and the solution for the same 
 * The question link for the same is
 * https://codeforces.com/contest/1808/problem/A
 * 
 * The solution for the same is
 * https://codeforces.com/contest/1808/submission/218068545
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int luckiness(int num)
{
    int max=0,min=9;
    while(num>0)
    {
        if(num%10>max)max=num%10;
        if(num%10<min)min=num%10;
        num/=10;
    }
    return max-min;
}
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
        int l,r;
        cin>>l>>r;
        int curr=0,ans=l;
        for(int i=l;i<=r;i++)
        {
            int temp=i;
            int luck=luckiness(temp);
            if(luck>=curr)
            {
                curr=luck;
                ans=i;
            }
            if(luck==9)
            break;
        }
        cout<<ans<<endl;
    }
}