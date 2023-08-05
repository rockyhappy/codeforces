/**
 * This is a codeforces Question and the solution for the same 
 * The question link for the same is
 * https://codeforces.com/contest/1851/problem/D
 * 
 * The solution for the same is
 * 
*/
#include<iostream>
#include<map>
#include<vector>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
bool checkPermutation(vector<long long int > a)
{
    int n=a.size();
    for (int i = 0; i < n; i++)
    {
        if(a[i]<0||a[i]>n)
            return false;
    }
    set <ll> st(a.begin(),a.end());
    return st.size()==n;
    
}
vector<ll> prefixToArray(vector<ll> a)
{
    vector<long long int > b(a.size());
    b[0]=a[0];
    for (int i = 1; i < a.size(); i++)
    {
        b[i]=a[i]-a[i-1];
    }
    return b;
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
        long long int n;
        cin>>n;
        vector<ll > vec(n-1);
        for (int i = 0; i < n-1; i++)
        {
            cin>>vec[i];
        }
        //check if the last element is removed or not 
        ll x=n*(n+1)/2;
        if(vec.back()!=x)
        {
            //if the control reaches this situation then 
            // it means that the last element of the prefix array is removed
            // so just add th total sum to the array 
            vec.push_back(x);
            vector< ll > arr=prefixToArray(vec);
            if(checkPermutation(arr))
            {
                cout<<"YES"<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
            continue;
        }
        /**
         * Now we know if the control has reached this position then the 
         * last element of the prefix array is not removed which tells us 
         * that any other element is removed from the Prefix summ array except 
         * The last element
        */
        vector< ll > arr=prefixToArray(vec);
        //After this we have converted the vec to normal array 
        //the prefix problem is resolved
        map<ll,ll> mp;
        for (int i = 0; i < n-1; i++)
        {
            mp[arr[i]]++;
        }
        //in this map there is occourence of all the charecter of the normal array (arr)

        //check how many elements occour twice 
        // create a vector to store all the elements that occour twice
        vector<ll> count;
        for(auto i: mp)
        {
            if(i.second>1)
            count.push_back(i.first);
        }
        //now if there are more than one element that has occoured twice so output no
        if(count.size()>1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        //if the repeating element is one but it has occoured more than one time then 
        // those arrays can't exist
        if(count.size()==1&&mp[count[0]]>2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        // now you need to count the number of elements missing from the array 
        //if the number of elements are more that 2 then remember no such permutation can exist
        vector<ll> count1;
        for (int i = 1; i < n+1; i++)
        {
            if(mp[i]==0)
                count1.push_back(i);
        }
        if(count1.size()!=2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
}