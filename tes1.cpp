#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int MEX(vector<int> v)
{
    //every element is not occuring only once
    set<int> st(v.begin(),v.end()  );
    v=vector<int>(st.begin(),st.end());
    int n = v.size();
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i]!=i)
        {
            return i;
        }
    }
    return n;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int mex = MEX(v);
    set<int> st,st2;
    int flag=0,mark=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<mex)
        {
            st.insert(v[i]);
        }
        if(st.size()==mex)
        {
            flag=1;
            mark=i;
            
            for(int j=i+1;j<n;j++)
            {
                // cout<<j<<endl;
                if(v[j]<mex)
                {
                    // cout<<v[j]<<endl;
                    st2.insert(v[j]);
                }
                int size = st2.size();
                // cout<<"size"<<st2.size()<<endl;
                if(size==mex)
                {
                    cout<<2<<endl;
                    cout<<1<<" "<<i+1<<endl;
                    cout<<i+2<<" "<<n<<endl;
                    return;
                }
            }
            cout<<-1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;
    if(flag==0)
    {
        cout<<-2<<endl;
        return;
    
    }
    set<int> st1;
    for(int i=mark;i<n;i++)
    {
       cout<<v[i]<<" ";
    }
    // cout<<st1.size()<<endl;
    if(st1.size()==mex)
    {
        cout<<2<<endl;
        cout<<1<<" "<<mark+1<<endl;
        cout<<mark+2<<" "<<n<<endl;
        return;
    }
    cout<<-1<<endl;
    
}
int main()
{
 
   fastio(); 
    int t ;
    cin>>t;
    while(t--)
    {
        solve();    
    }
}