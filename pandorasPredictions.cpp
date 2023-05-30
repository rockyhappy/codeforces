#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int);
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i =n+1;i<=m;i++)
    {
        if(checkPrime(i))
        {
            if(i==m)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
bool checkPrime(int n)
{
    int i=1,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count>2)
    return false;
    else
    return true;
}