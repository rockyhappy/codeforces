#include<bits/stdc++.h>
using namespace std;
bool check(int n,int m)
{
    if(n==m)
        return true;
    else if(n<m||n%3!=0)
    return false;
    else return (check(n/3,m)||check(2*n/3,m));

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,m;
       cin>>n>>m;
       if(n==m)
        {
            cout<<"YES"<<endl;
            continue;
        }

       if(m>n||n%3!=0)
       {
        cout<<"NO"<<endl;
        continue;
       }
       else
        {
            if(check(n,m))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
return 0;
}
