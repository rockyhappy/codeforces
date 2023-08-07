/**
 * This is a codeforces problem and the problem link is as
 * follows
 *  https://codeforces.com/problemset/problem/200/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    float arr[n],sum=0;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
        cout<<(float)sum/n<<endl;
        return 0;
}