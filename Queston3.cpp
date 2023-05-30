#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >>n;
        int arr[n],smallest;
        for (int  i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(i==0)
                smallest=arr[i];
            if(arr[i]<smallest)
                smallest=arr[i];
        }
        if(smallest%2==0)
        {
            int flag=0;
            for (int  i = 0; i < n; i++)
            {
                if(arr[i]%2==1)
                {
                    flag=1;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(flag==0)
                cout<<"YES"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
