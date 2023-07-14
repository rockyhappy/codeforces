/**
 * This is a codeforces question and the solution for the same 
 * The question link is given below
 * https://codeforces.com/contest/1846/problem/B
 * 
 * The link for the soltuion is given below
 * https://codeforces.com/contest/1846/submission/212715938
*/
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
    int t;
    cin>>t;
    while(t--)
    {
        vector<vector<string>> vec(3,vector<string> (3));
        string str[3];
        for(int i=0;i<3;i++)
        cin>>str[i];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                vec[i][j]=str[i][j];
            }
            
        }
        
        // for +
        if( (vec[0][0]=="+"&&vec[1][1]=="+"&&vec[2][2]=="+")||
            (vec[0][2]=="+"&&vec[1][1]=="+"&&vec[2][0]=="+")||
            (vec[0][0]=="+"&&vec[1][0]=="+"&&vec[2][0]=="+")||
            (vec[0][1]=="+"&&vec[1][1]=="+"&&vec[2][1]=="+")||
            (vec[0][2]=="+"&&vec[1][2]=="+"&&vec[2][2]=="+")||
            (vec[0][0]=="+"&&vec[0][1]=="+"&&vec[0][2]=="+")||
            (vec[1][0]=="+"&&vec[1][1]=="+"&&vec[1][2]=="+")||
            (vec[2][0]=="+"&&vec[2][1]=="+"&&vec[2][2]=="+"))
            cout<<"+"<<endl;
        else if(
            (vec[0][0]=="X"&&vec[1][1]=="X"&&vec[2][2]=="X")||
            (vec[0][2]=="X"&&vec[1][1]=="X"&&vec[2][0]=="X")||
            (vec[0][0]=="X"&&vec[1][0]=="X"&&vec[2][0]=="X")||
            (vec[0][1]=="X"&&vec[1][1]=="X"&&vec[2][1]=="X")||
            (vec[0][2]=="X"&&vec[1][2]=="X"&&vec[2][2]=="X")||
            (vec[0][0]=="X"&&vec[0][1]=="X"&&vec[0][2]=="X")||
            (vec[1][0]=="X"&&vec[1][1]=="X"&&vec[1][2]=="X")||
            (vec[2][0]=="X"&&vec[2][1]=="X"&&vec[2][2]=="X")
        )
        cout<<"X"<<endl;
        else if(
            (vec[0][0]=="O"&&vec[1][1]=="O"&&vec[2][2]=="O")||
            (vec[0][2]=="O"&&vec[1][1]=="O"&&vec[2][0]=="O")||
            (vec[0][0]=="O"&&vec[1][0]=="O"&&vec[2][0]=="O")||
            (vec[0][1]=="O"&&vec[1][1]=="O"&&vec[2][1]=="O")||
            (vec[0][2]=="O"&&vec[1][2]=="O"&&vec[2][2]=="O")||
            (vec[0][0]=="O"&&vec[0][1]=="O"&&vec[0][2]=="O")||
            (vec[1][0]=="O"&&vec[1][1]=="O"&&vec[1][2]=="O")||
            (vec[2][0]=="O"&&vec[2][1]=="O"&&vec[2][2]=="O")
        )
        cout<<"O"<<endl;
        else cout<<"DRAW"<<endl;
    }
}