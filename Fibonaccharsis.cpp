/**
 * This is a codeforces question and the solution for the same 
 * The solution link for the same is
 * https://codeforces.com/contest/1853/problem/B
 * 
 * the solution for the same is 
 * https://codeforces.com/contest/1853/submission/217588957
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
        int n ,k;
        cin>>n>>k;
        int ans=0 ;
        for (int i = n; i >=0; i--)
        {
            //consider this as a reverse series 
            //the second element will always be equal to the value of n
            int second_element =n;
            int first_element = i;
            bool flag=true;
            for (int  j = k-2; j >0; j--)
            {
                //now calculate the previous element which can occour 
                //if the second and the first elements are as follows
                int third=second_element -first_element;
                //now the second element will be the already existing first element 
                // the first element will be the newly formed third element 
                second_element =first_element ;
                first_element=third;
                //now check if these values of the new second and first elements are possible or not 
                if(first_element>second_element||first_element<0)
                   {
                    flag=false;
                    break;
                   }
                
            }
            if(flag==true)
                ans++;

        }
        cout<<ans<<endl;
    }
}