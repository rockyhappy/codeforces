/**
 * This is a problem from codeforces nad the solution
 *  for the same is 
 * the Question link for the same is
 * https://codeforces.com/contest/1823/problem/A
 * Note that the A
-characteristic depends only on the number of 1
-s. Let the number of 1
-s be equal to x
, then the number of −1
-s is equal to n−x
, and the A
-characteristic is equal to f(x)=(x−1)⋅x2+(n−x−1)⋅(n−x)2
.

Let's iterate over all x
 from 0
 to n
, and check if there is such x
 that f(x)=k
. Then print x
 numbers 1
 and n−x
 numbers −1
.
 * 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define vec vector
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x=-1;
        cin>>n>>k;
        for (int  i = 0; i <= n; i++)
        {
            if((i*(i-1)/2) +(n-i)*(n-i-1)/2==k)
            x=i;
        }
        if(x==-1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for (int  i = 0; i < n; i++)
            {
                if(i<x)
                cout<<"1 ";
                 else
                cout<<"-1 ";
            
            }
            cout<<""<<endl;
        }
    }
}