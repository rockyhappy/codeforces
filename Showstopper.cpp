/**
 * This is a question from the contest of 
 * codeforces and the solution for the same 
 * the question link for the same is
 * https://codeforces.com/contest/1798/problem/A
 * 
 * This is the correct solution for the problem
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n],max1=0,max2=0;
        for (int  i = 0; i < n; i++)
           {
            cin>>a[i];
            //max1=max(max1,a[i]);
           }
        for (int  i = 0; i < n; i++)
          {
            cin>>b[i];
            //max2=max(max2,b[i]);
          }  
        for (int  i = 0; i < n; i++)
        {
            if(a[i]>b[i])
            {
                swap(a[i],b[i]);
            }
            max1=max(max1,a[i]);
            max2=max(max2,b[i]);
        }
        if(max1==a[n-1]&&max2==b[n-1])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
        return 0;
}