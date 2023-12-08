#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve ()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt+=str[i]-'0';
    }
    if(cnt==n)
    {
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
    
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