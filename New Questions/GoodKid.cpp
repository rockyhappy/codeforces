#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
void solve()
{
    int n ;
    cin>>n;
    long long int sum=1,mxsum=0;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    for(int i=0;i<n;i++)
    {
        sum=1;
        for(int j =0;j<n;j++)
        {
            if(j==i)
            sum*=1ll*(vec[j]+1);
            else 
            sum*=1ll*vec[j];
            //cout<<sum<<endl;
        }
        //cout<<sum<<endl;
        mxsum=max(mxsum,sum);
    }
    cout<<mxsum<<endl;
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
        solve();;
    }
}