/**
 * This is a codeforces problem and the solutionfor the same 
 * the problem link is 
 * https://codeforces.com/problemset/problem/248/A
*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n ;// to store the number of doors
    cin>>n;
    int leftDoor=0,rightDoor=0,lzero=0,lone=0,rzero=0,rone=0;
    for(int i =0;i<n;i++)
    {
        cin>>leftDoor>>rightDoor;
        if(leftDoor)
            lone+=1;
        else lzero+=1;
        if(rightDoor)
            rone++;
        else rzero+=1;
    }
    cout<<min(lone,lzero)+min(rone,rzero)<<endl;
    return 0;
}