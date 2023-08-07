/**
 * This is a codeforces question and the solution for the same 
 * The question link is 
 * https://codeforces.com/contest/1843/problem/B
 * 
 * the solution for the same is 
 * https://codeforces.com/contest/1843/submission/216489063
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
        vector<long long > vec;
        long long sum=0,count=0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            sum+=abs(a);
            if(a!=0)
            vec.push_back(a);
            
        }
        for (int i = 0; i < vec.size(); i++)
        {
            if(i==0&&vec[i]<0)
            count++;
            else if(vec[i]<0&&vec[i-1]>0)
            count++;
            // if(vec[i]<=0&&vec[i-1]<=0)
            // {
            //     continue;
            // }
            // else if(vec[i]<=0&&vec[i-1]>0)
            // {
            //     count++;
            //  }
            //cout<<vec[i]<<endl;
        }
        //if(vec[0]<0)count++;
        cout<<sum<<" "<<count<<endl;
        
    }
}