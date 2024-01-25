#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    string num1,num2;
    cin>>num1>>num2;
    int n=num1.length();
    int m=num2.length();
    int cnt=0;
    while(n!=m)
    {
        if(n>m)
        {
            num2='0'+num2;
            m++;
        }
        else{
            num1='0'+num1;
            n++;
        }
        n=num1.length();
        m=num2.length();
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            sum+=abs(num1[i]-num2[i]);
            continue;
        }
        // if(num1[i]<num2[i])
        // {
            if(num1[i-1]!=num2[i-1])
            {
                sum+=9;
                num1[i]=9;
                num2[i]=0;
            }
            else{
                sum+=abs(num1[i]-num2[i]);
            }
        // }
    }
    cout<<sum<<endl;
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