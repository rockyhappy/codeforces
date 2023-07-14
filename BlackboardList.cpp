/**
 * This is a question from codeforces and the 
 * solution for the same, the question link is 
 * https://codeforces.com/contest/1838/problem/A
 * 
 * the solution link for the same is 
 * https://codeforces.com/contest/1838/submission/209104490
 * 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0,flag=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a<0)
            {
                ans=a;
                flag=1;
            }
            if(flag==0)
            ans=max(ans,a);

        }
        cout<<ans<<endl;
    }
    return 0;
}