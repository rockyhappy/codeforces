#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
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
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<"-1"<<endl;
        }
        else{
            string str="";
            while(n>0)
            {
                str+=(n%2)+'0';
                n/=2;
            }
            int n=str.length();
            deque<int> vec;
            for (int i =1; i < n; i++)
            {
                if(str[i]=='0')
                {
                    vec.push_front(1);
                }
                else vec.push_front(2);
            }
            cout<<vec.size()<<endl;
            for(int i=0;i<vec.size();i++)
                cout<<vec[i]<<" ";
            cout<<endl;
        }
    }
} 