#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
#include<math.h>
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
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> vec1(n);
        vector<int> vec2(m);
        int min1=INT_MAX,min2=INT_MAX,max1=INT_MIN,max2=INT_MIN;
        long long sum1=0,sum2=0;
        for (int i = 0; i < n; i++)
        {
            cin>>vec1[i];
            min1=min(min1,vec1[i]);
            max1=max(max1,vec1[i]);
            sum1+=vec1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin>>vec2[i];
            min2=min(min2,vec2[i]);
            max2=max(max2,vec2[i]);
            sum2+=vec2[i];
        }
        sort(vec1.begin(),vec1.end());
        sort(vec2.begin(),vec2.end());
        // cout<<"HELLO"<<endl;
        
         //cout<<sum1<<" "<<sum2<<endl;
        
            if(min1<max2)
            {
                sum1+=max2-min1;
                sum2-=max2-min1;
                swap(vec2[m-1],vec1[0]);
                //max1=max(max1,max2);
                // min2=min(min2,min1);
                min1=*min_element(vec1.begin(),vec1.end());
                min2=*min_element(vec2.begin(),vec2.end());
                max1=*max_element(vec1.begin(),vec1.end());
                max2=*max_element(vec2.begin(),vec2.end());

            }
            int temp =sum1;
             //cout<<sum1<<" "<<sum2<<endl;
            if(min2<max1)
            {
                sum2+=max1-min2;
                sum1-=max1-min2;

            }
             //cout<<sum1<<" "<<sum2<<endl;
        if(k&1)
        {
            cout<<temp<<endl;
        }
        else{
            cout<<sum1<<endl;
        }

    }
}