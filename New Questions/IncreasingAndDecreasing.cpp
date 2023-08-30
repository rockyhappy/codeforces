#include<iostream>
#include<map>
#include<vector>
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
        int x,y,n;
        cin>>x>>y>>n;
        vector<int> vec(n+1);
        vec[1]=x;
        vec[n]=y;
        int flag=0;
        for(int i =2;i<=n;i++)
        {
            vec[i]=vec[i-1]+i-1;
            if(vec[n]>vec[i-1]+i-1)
            {
                flag=1;
                break;
            }
        }
        if(flag)cout<<-1<<endl;
        else{
            for(int i=1;i<n;i++)
            cout<<vec[i]<<" ";
            cout<<endl;
        }
    }
}