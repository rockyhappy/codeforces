#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif
        fastio();
    int n;
    cin>>n;
    int total=0,newLine=0;
    for(int i=1;true;i++)
    {
         newLine+=i;
         total+=newLine;
         
         if(n-total<0)
         {
            cout<<i-1<<endl;
            break;
         }
         if(n-total==0)
         {
            cout<<i<<endl;
            break;
         }
    }
    
}