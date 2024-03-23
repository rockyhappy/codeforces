#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int numSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
void solve()
{
    int n ;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<" "<<n/2<<endl;
    }
    else{
        int n1=0;
        int n2=0;
        int cnt=0;
        while(n>0)
        {
            int temp=n%10;
            if(temp%2==0)
            {
                n1=(temp/2)*pow(10,cnt)+n1;
                n2=(temp/2)*pow(10,cnt)+n2;
            }
            else{
                if(n1>n2)
                {
                    n2=((temp/2)+1)*pow(10,cnt)+n2;
                    n1=((temp/2))*pow(10,cnt)+n1;
                }
                else{
                    n1=((temp/2)+1)*pow(10,cnt)+n1;
                    n2=(temp/2)*pow(10,cnt)+n2;
                }
            }
            n=n/10;
            cnt++;
        }
        cout<<n1<<" "<<n2<<endl;
    }
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