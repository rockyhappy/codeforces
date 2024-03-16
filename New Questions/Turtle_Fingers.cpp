/**
* This is the solution for the problem Turtle Fingers in the codeforces
* Link to the problem: https://codeforces.com/contest/194/problem/A
*/
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
map<int, int> primeFactors(int n)
{
    map<int, int> factors;
    int count = 0;
    
    while (n % 2 == 0) {
        n /= 2;
        count++;
    }
    if (count > 0) {
        factors[2] = count;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) {
            factors[i] = count;
        }
    }
    
    if (n > 2) {
        factors[n] = 1;
    }
    
    return factors;
}
void solve()
{
    int l,a,b;
    cin>>a>>b>>l;
    int copy1=l,copy2=l,cnt1=0,cnt2=0;
    while(copy1%a==0)
    {
        copy1/=a;
        cnt1++;
    }
    copy1=l;
    while(copy1%b==0)
    {
        copy1/=b;
        cnt2++;
    }
    
    int cnt=0;
    set<int> s;
    for (int  i = 0; i <=cnt1; i++)
    {
        int temp=l;
        // temp/=pow(a,i);
        for (int j = 0; j <=cnt2; j++)
        {
            if(temp%(int)(pow(b,j)*pow(a,i))==0)
            {
               s.insert(temp/(int)(pow(b,j)*pow(a,i)));
            }
        }
    }
    cout<<s.size()<<endl;
    
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