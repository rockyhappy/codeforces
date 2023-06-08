/**
 * This is a question from codeforces and the solution for
 * the same, the Quetion link is 
 * https://codeforces.com/contest/1831/problem/B
 * 
 * 
 * understand this question quite well presently it is wrong
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr1[n],arr2[n];
        map<int ,int> mp;
        for (int  i = 0; i < n; i++)
            {
                cin>>arr1[i];
                mp[arr1[i]]++;
            }
        for (int i = 0; i < n; i++)
            {
                cin>>arr2[i];
                mp[arr2[i]]++;
            }
        int maxOcc=0;
            for(auto i: mp)
            {
                maxOcc=max(maxOcc,i.second);
            }
        cout<<maxOcc<<endl;
        
        
    }
    return 0;
}