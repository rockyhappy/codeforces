#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool checker(int target,int h,int n,vector<int>& vec)
{
    for(int i=0;i<n;i++)
    {
        if(vec[i]<=target)
        {
            continue;
        }
        else
        {
            h-=vec[i];
        }
    }
    if(h>=0)return true;
    else return false;
}
void solve()
{
    int n,h;
    cin>>n>>h;
    vector<int > vec(n);
    int largest=0;
    for(int i=0;i,n;i++)
    {
        cin>>vec[i];
        largest=max(largest,vec[i]);
    
    }
        int low=0,mid,ans=0,high=largest;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(checker(mid,h,n,vec))
            {
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        cout<<ans<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   solve();
	}
	return 0;
}
