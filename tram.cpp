/**
 * This is a codeforces problem and the solution  for the
 * same and the problem link for the same is
 * https://codeforces.com/problemset/problem/116/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;// the number of train stops 
    cin>>n;
    int capacity=0,largest=0;
    for (int  i = 0; i < n; i++)
    {
        int a,b;
        // a is for the number of people exiting the tram
        // b is for the number of people entring the tram
        cin>>a>>b;
        capacity+=b-a;
        if(capacity>largest)
        {
            largest=capacity;

        }
    }
    cout<<largest<<endl;
    return 0;
    
}