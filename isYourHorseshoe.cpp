/**
 * THis is a codeforces question and the solution 
 * for the same, the problem link is 
 * https://codeforces.com/problemset/problem/228/A
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int a;
    cin>>a;
    s.insert(a);
    cin>>a;
    s.insert(a);
    cin>>a;
    s.insert(a);
    cin>>a;
    s.insert(a);

    cout<<4-s.size()<<endl;
}