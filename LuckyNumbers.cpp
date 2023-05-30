/**
 * This is a question from codeforces and the
 * solution for the same, The question link is 
 * https://codeforces.com/contest/1808/problem/A
 * 
 * this question is yet not solved
*/
#include<bits/stdc++.h>
using namespace std;
void solve(int ,int );
int luckiness(int );
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        solve(l,r);
    }
}
void solve(int l,int r)
{
    int maximum=0,n,j;
    for (int i = l; i <=r; i++)
    {
        n=luckiness(i);
        if(n>maximum)
        {
            maximum=n;
            j=i;
        }
    }
    cout<<j<<endl;
}
int luckiness(int num)
{
    int max=0,min=9;
    while(num>0)
    {
        if(num%10>max) max=num%10;
        if(num%10<min) min =num%10;
        num/=10;
    }
    return max-min;
    
}