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
        int n ,k;
        cin>>n>>k;
        string str="";
        cin>>str;
        if(k&1)
        {
            // this means k is odd
            // for the odd case nothing matters so sort the odd and the even separately
            string odd ="",even ="",newstr="";
            
            for(int i =0;i<n;i++) 
            {
                if(i&1)
                {
                    even+=str[i];
                }
                else
                {
                    odd+=str[i];
                }
            }
            sort(odd.begin(),odd.end());
            sort(even.begin(),even.end());
            for(int i=0;i<n;i++)
            {
                if(i&1)newstr+=even[i/2];
                else newstr+=odd[i/2];
            }
            cout<<newstr<<endl;
        }
        else
        {
            sort(str.begin(),str.end());
            cout<<str<<endl;
        }
    }
}