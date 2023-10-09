/**
 * This is a question from codeforces and the solution for the same 
 * The question link for the same is
 * https://codeforces.com/contest/1875/problem/B
 * 
 * The solution for the smae is
 * https://codeforces.com/contest/1875/problem/B
*/

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
        int n ,m , k;
        cin>>n>>m>>k;
        vector<int> vec1(n+1);
        vector<int> vec2(m+1);
        int min1=INT_MAX,min2=INT_MAX,max1=INT_MIN,max2=INT_MIN;
        for (int i = 1; i < n+1; i++)
        {
                cin>>vec1[i];
        }
        for (int i = 1; i < m+1; i++)
        {
            cin>>vec2[i];
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        min1=vec1[1];
        min2=vec2[1];
        max1=vec1[n];
        max2=vec2[m];

        if(min1<max2)
        {
            swap(vec1[1],vec2[m]);
            sort(vec1.begin(),vec1.end());
            sort(vec2.begin(),vec2.end());
            min1=vec1[1];
            min2=vec2[1];
            max1=vec1[n];
            max2=vec2[m];
        }
        if(k&1){
            long long int sum=0;
            for (int i = 1; i <=n; i++)
            {
                sum+=vec1[i];
            }
            cout<<sum<<endl;
        }
        else{
            if(min2<max1)
            {
                swap(vec2[1],vec1[n]);
                
            }
                long long int sum=0;
                for (int i = 1; i <=n; i++)
                {
                    sum+=vec1[i];
                }
            cout<<sum<<endl;
        }

    }
}