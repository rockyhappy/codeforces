/**
 * This is a question from the contest of codeforces and this is wrong 
 * 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,sum=0, firstElement;
        cin>>n;
        vector <int> vec(n,0);
        for (int i = 1; i < n; i++)
        {
            vec[i]=i+1;
            sum+=vec[i];
        }
        firstElement=n-(sum%n);
        vec[0]=firstElement;
        for(auto i:vec)
            cout<<i;
        cout<<""<<endl;
    }
}