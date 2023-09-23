#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int solve()
{
    int n ,k;
    cin>>n>>k;
    string str;
    cin>>str;
    vector<int>  vec;
        int windowOn=0,count=1;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='B')
            vec.push_back(i);
        }
        if(vec.size()==0)return 0;
        windowOn=vec[0];
        for(int i=1;i<vec.size();i++)
        {
            if(vec[i]-windowOn<k)
            {
                continue;
            }
            else 
            {
                count++;
                windowOn=vec[i];
            }
        }
        return count;
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
        cout<<solve()<<endl;
    }
}