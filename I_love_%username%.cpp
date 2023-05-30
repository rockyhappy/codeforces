/**
 * This is a codecforces problem and the solution 
 * for thwe same 
 * https://codeforces.com/problemset/problem/155/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int firstEntry,entry,largest,smallest,count=0;
    cin>>firstEntry;
    largest=firstEntry;
    smallest=firstEntry;
    for(int i =1;i<n;i++)
    {
        cin>>entry;
        if(entry>largest)
        {
            largest=entry;
            count++;
        }
        if(entry<smallest)
        {
            smallest=entry;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
} 