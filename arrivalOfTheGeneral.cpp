/**
 * This is a codeforces problem and the solution for the same 
 * the link to the problem is 
 * https://codeforces.com/problemset/problem/144/A
 * 
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,positionLargest,positionSmallest,smallest=101,largest=0,moves=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n ;i++)
          {
            cin>>arr[i];
            if(arr[i]>largest)
            {
                largest=arr[i];
                positionLargest=i;
            }
            if(arr[i]<=smallest)
            {
                smallest=arr[i];
                positionSmallest=i;
            }
          }
          if(positionLargest==positionSmallest)
          {
            cout<<0<<endl;
            return 0;
          }
          if(positionSmallest>positionLargest)
          {
                moves+=positionLargest;
                moves+=n-1-positionSmallest;
          }
          else
          {
            moves+=positionLargest;
            moves+=n-2-positionSmallest;
          }
          cout<<moves<<endl;
          return 0;

}