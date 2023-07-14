/**
 * This is a question from codeforces and the 
 * solution for the same, the wuestion link is 
 * https://codeforces.com/contest/1838/problem/B
 * 
 * the solution link for the same is
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
    int t;
    cin>>t;
    while(t--)
    {
        int n,id1=0,id2=0,idn=0;
        cin>>n;
        vector<int> arr(n,0);
        //declairing variables for swap
        int swap1=0,swap2=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]==1)id1=i+1;
            else if(arr[i]==2)id2=i+1;
            else if(arr[i]==n) idn=i+1; 
        }
        if(idn<id1)
        {swap1=idn;swap2=id1;}
        else if(idn>id2)
        {
            swap1=id2;
            swap2=idn;
        }
        else
        {
            swap1=1;
            swap2=1;
        }
        cout<<swap1<<" "<<swap2<<endl;
    }
    return 0;
}