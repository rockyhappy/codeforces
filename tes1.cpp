
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<1000;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
                cnt++;
        }
        if(cnt!=0)
        {
            cout<<i<<" "<<cnt<<endl;
        }
    }
}