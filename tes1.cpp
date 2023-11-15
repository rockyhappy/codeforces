#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool isSortedAscending(const std::vector<int>& vec) {
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] < vec[i - 1]) {
            return false;
        }
    }
    return true;
}
bool isPowerOf2(int num) {
    if (num <= 0) {
        return false;
    }
    return (num & (num - 1)) == 0;
}
void solve(){

   int n;
   cin>>n;
   vector<int> vec(n+1);
   for(int i=1;i<=n;i++)
   {
    cin>>vec[i];
   }
   if(isSortedAscending(vec))
   {
    cout<<"YES"<<endl;
    return;
   }
    for (int i = n-1; i >0; i--)
    {
        if(vec[i]>vec[i+1])
        {
            if(!isPowerOf2(i))
                {
                    cout<<"NO"<<endl;
                    return;
                }
        }
    }
    cout<<"YES"<<endl;
    
}
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
        solve();
    }
}