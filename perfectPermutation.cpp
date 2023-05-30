/**
 * this is a codeforces problem and the link for the same is
 * https://codeforces.com/problemset/problem/233/A
 * the level of this problem is nearly 800
*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    if(n>1)
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            cout<<i+1<<" ";
            else cout<<i-1<<" ";
            if(i==n)
             cout<<i<<" ";

        }
    }
    else
    cout<<-1<<endl;
}