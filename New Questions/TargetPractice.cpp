#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    vector<vector<char>> vec(10,vector<char> (10));
    int sum=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>vec[i][j];
            if(vec[i][j]=='X')
            {
                if((i==0||i==9)||(j==0||j==9))sum+=1;
                else if((i==1||i==8)||(j==1||j==8))sum+=2;
                else if((i==2||i==7)||(j==2||j==7))sum+=3;
                else if((i==3||i==6)||(j==3||j==6))sum+=4;
                else sum+=5;
            }
        }
    }
    cout<<sum<<endl;

}
int main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        #endif
        fastio();
    int t ;
    cin>>t;
    while(t--)
    {
        solve();
    }
}