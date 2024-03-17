#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool isSorted(vector<int> vec)
{
    for (int i = 0; i < vec.size()-1; i++)
    {
        if(vec[i]>vec[i+1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> vec1;
    for (int i = 0; i < n; i++)
    {
      cin>>vec[i];
      if(vec[i]>=10)
      vec1.push_back(vec[i]/10);
      vec1.push_back(vec[i]%10);
    }
    if(isSorted(vec))
    {
        cout<<"YES"<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j <n; j++)
        {
            if(j<=i)
            {
                if(vec[j]>=10)
                temp.push_back(vec[j]/10);
                temp.push_back(vec[j]%10);
            }
            else{
                temp.push_back(vec[j]);
            }
        }
        if(isSorted(temp))
        {
            cout<<"YES"<<endl;
            return;
        }
        
    }
    
    cout<<"NO"<<endl;
    return;

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