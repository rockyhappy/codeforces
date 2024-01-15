/**
 * This is a Codeforces Question and the solution for the same
 * the question Link
 * https://codeforces.com/contest/1921/problem/D
*/
#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> b(m);
    for(int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long int sum=0;
    int i=0,j=n-1;
    int end=m-1,start=0;
    while(i<=j){
        int diff=abs(a[i]-b[start]);
        int diff2=abs(a[j]-b[start]);
        int diff3=abs(a[i]-b[end]);
        int diff4=abs(a[j]-b[end]);
        if(diff>=diff2 && diff>=diff3 && diff>=diff4)
        {
            sum+=diff;
            i++;
            start++;
        }
        else if(diff2>=diff && diff2>=diff3 && diff2>=diff4)
        {
            sum+=diff2;
            j--;
            start++;
        }
        else if(diff3>=diff && diff3>=diff2 && diff3>=diff4)
        {
            sum+=diff3;
            i++;
            end--;
        }
        else{
            sum+=diff4;
            j--;
            end--;
        }
        //cout<<diff<<" "<<diff2<<" "<<diff3<<" "<<diff4<<endl;
        //cout<<sum<<endl;
    }
    cout<<sum<<endl;
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