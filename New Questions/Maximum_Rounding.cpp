#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    string str;
    cin>>str;
    int n=str.size();
    str='0'+str;
    n=n+1;
    int carry=0, marker=0,flag=0;
    for (int i = n-1; i >=0; i--)
    {
       
       int temp=str[i]-'0';
       temp+=carry;
       if(temp>=5)
       {
        carry=1;
        marker=i;
        flag=1;
       }
         else
         {
            carry=0;
            str[i]=temp+'0';
         }
    }
    for(int i=marker;i<n;i++)
    {
        if(flag==1)str[i]='0';
    }
    if(str[0]=='0')str.erase(0,1);
    cout<<str<<endl;
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