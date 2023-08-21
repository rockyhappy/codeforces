
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
       int n;
       cin>>n;
       vector<int> vec(n);
       for (int i = 0; i < n; i++)
       {
        cin>>vec[i];
       }
       int count=0;
       for(int i =n-1;i>0;i--)
       {
            if(vec[i]>vec[i-1])
            {
                int temp=i;
                while(vec[i]>vec[i-1])
                {
                    //cout<<vec[i]<<endl;
                    i--;
                    if(i==0)
                    break;
                }
                
                    if((temp-i)%2==1)count++;
                    count+=(temp-i)/2;
                
            }
            
       }
       cout<<count<<endl;
    }
}