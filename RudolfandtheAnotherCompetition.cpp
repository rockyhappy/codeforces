/**
 * This is a question from codeforces and the solution for the same 
 * The Question link for the given problem is
 * https://codeforces.com/contest/1846/problem/C
 * 
 * The solution link for the problem is
 * https://codeforces.com/contest/1846/submission/212824808
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
    int t;
    cin>>t;
    while(t--)
    {
        int n ,m ,h;
        cin>>n>>m>>h;
        long long int Rpoints=0,Rpenality=0,rank=1;
        for (int i = 0; i < n ; i++)
        {
            vector<long long int> vec(m);
            for (int j = 0; j < m; j++)
            {
                cin>>vec[j];
            }
            sort(vec.begin(),vec.end());
            long long int sum=0,penalty=0,points=0,hex=h;
            for (int j = 0; j < m; j++)
            {
                    sum+=vec[j];
                    if(sum>h)
                    break;
                    penalty+=sum;
                    points++;
                    hex-=vec[j];
                
               
            }
            if(i==0)
            {
                Rpoints=points;
                Rpenality=penalty;
                continue;
            }
            //cout<<Rpoints<<endl;
            //cout<<points<<" "<<penalty<<endl;
            if(points>Rpoints)
                rank++;
            else if(points==Rpoints)
            {
                if(Rpenality>penalty)
                    rank++;
            }
            
            
        }
            cout<<rank<<endl;
        
    }
}