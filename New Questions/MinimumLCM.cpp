#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int calculateLCM(int a, int b) {
    return (a * b) / __gcd(a, b);
}
int highestFactorOfNumberElseThanTheNUmberItself(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return n/i;
        }
    }
    return 1;
}
void solve()
{
    long long int n;
    cin>>n;
    long long int a,b;
    long long int minLCM=INT_MAX;
    long long int ans1=0,ans2=0;
    ans1=highestFactorOfNumberElseThanTheNUmberItself(n);
    ans2=n-ans1;
    cout<<ans1<<" "<<ans2<<endl;

}
int main()
{
 
   fastio(); 
    int t ;
    cin>>t;
    while(t--)
    {
        solve();    
    }
}