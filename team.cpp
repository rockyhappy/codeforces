/**
 * This is a codeforces problem and the solution 
 * for the same. The problem link is 
 * https://codeforces.com/problemset/problem/231/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,sum2=0 ;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        sum=0;
        int a,b,c;
        cin>>a>>b>>c;
        sum+=a+b+c;
        if(sum>1)
        sum2++;
    }
    cout<<sum2<<endl;
    return 0;
    
}