/**
 * This is a code forces question and the soltuion for the same 
 * The Question link is 
 * https://codeforces.com/problemset/problem/1520/A
 * 
 * The solution link for tha same is
 * https://codeforces.com/contest/1520/submission/215338662
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
    int t ;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        string str;
        cin>>str;
        string s1="";
        for (int i = 0; i < n; i++)
            if(str[i]!=s1[s1.length()-1])
                s1+=str[i];
        vector<int> vec(27,0);
        for(int i=0;i<s1.length();i++)
        {
            if(vec[s1[i]-'A']==0)  vec[s1[i]-'A']++;
            else 
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"YES"<<endl;
    }
}