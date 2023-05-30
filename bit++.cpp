/**
 * This is a question from codeforces and
 *  the solution for the same. The problem link
 * https://codeforces.com/problemset/problem/282/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i]=='+')
            {
                x++;
                break;
            }
            if(str[i]=='-')
            {
                x--;
                break;
            }
        }
        
    }
    cout<<x<<endl;
    return 0;

}
