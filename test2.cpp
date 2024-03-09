#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool isPalindrome(string str)
{
    int l = 0;
    int h = str.size() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n ;
    cin>>n;
    string str;
    cin>>str;
    int s=str.size();
    // if(isPalindrome(str))
    // {
    //     if()
    // }
    for(int i=0;i<s;i++)
    {
        if(str[i]<str[s-i-1])
        {
            break;
        }
        else if(str[i]>str[s-i-1])
        {
            n-=1;
            reverse(str.begin(),str.end());
            break;
        }
        if(i>=s/2)
        {
            break;
        }
    }
    // reverse(str.begin(),str.end());
    if(n%2==0)
    {
        cout<<str<<endl;
        return;
    }
    else 
    {
        cout<<str;
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }

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