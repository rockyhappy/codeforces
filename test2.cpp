#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
long long int checker(long long int n,vector<long long int> vec,long long c,long long int target)
{
    for (int i = 0; i < n; i++)
    {
        c=c-(vec[i]+(target))*1ll*(vec[i]+(target));
    }
    return c;
    
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
        long long int n,c;
        cin>>n>>c;
        vector<long long int > vec(n);
        long long int sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
        }
        long long int  high=1e9,low=0,mid;
        while(low<=high)
        {
            long long int  ca=0;
            mid=low+(high-low)/2;
            for(int i =0;i<n;i++){
                ca+=(vec[i]+mid)*1ll*(vec[i]+mid);
                if(ca>c)break;
            }
            if(ca==c)
            {
                break;
            }
            else if(ca<c)
            {
                low=mid+1;
            }
            else 
            {
                high=mid-1;
            }
        }
        cout<<(long long int )mid/2<<endl;
        
    }
}