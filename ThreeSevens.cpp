/**
 * This is a question from a contest of codeforces
 * and i am upsolving it the solution is correct
 * The question link for the same is 
 * https://codeforces.com/contest/1798/problem/B
 * 
 * Used Approch
 * first declare a 2 dimensional vector and fill the vector 
 * accordingly 
 * 
*/
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int 
void solve();
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
void solve ()

{
    int n;
    cin>>n;
    set <int > st;
    vector < vector <int> > vec(n);
    vector <int > ans;
    //taking input
    for (int  i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        for (int  j = 0; j < m; j++)
        {
            int a;
            cin>>a;
            vec[i].push_back(a);
        }

    }
    //computing
    int answer;
    for(int i=n-1;i>=0;i--)
    {
        answer=-1;
        for (int  j = 0; j < vec[i].size(); j++)
        {
            //cout<<vec[i][j]<<"  ";
            if(st.find(vec[i][j])==st.end())
            {
                st.insert(vec[i][j]);
                answer=vec[i][j];
            }
        }
        if(answer==-1)
        {
            cout<<-1<<endl;
            return;
        }
        ans.push_back(answer);
    }
    for (int i = n-1; i>=0; i--)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return ;
}