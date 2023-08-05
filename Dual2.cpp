/**
 * This question is an extention for the question dual
 * It was originally the dual question except that this question now 
 * requires to be finished in less than or equal to 31 moves
 * 
*/
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
       int n;cin>>n;
       vector<int> vec(n+1,0);
       int neg=0,pos=0,in=0,mx=INT_MIN;
        for (int i = 1; i <=n; i++)
        {
            cin>>vec[i];
            if(vec[i]>=0)pos++;
            if(vec[i]<=0)neg++;
            if(vec[i]>mx)
            {
                mx=vec[i];
                in=i;
            }
        }
        if(pos==n)
        {
            //This means that all the elements of the given array are positive
            //so you dont have to anything except that you will just take out the 
            //prefix sum for the following equation
            cout<<n-1<<endl;
            for(int i =2;i<=n;i++)
            {
                cout<<i<<" "<<i-1<<endl;
            }
        }
        else if(neg==n)
        {
            //This means that all the elements are negative 
            //To solve such a problem use sufix sum for the following problem 
            cout<<n-1<<endl;
            for (int i = n; i >=2; i--)
            {
                cout<<i-1<<" "<<i<<endl;
            }
            
        }
        else 
        {
            
        }
    }
}