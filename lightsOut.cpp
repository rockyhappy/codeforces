#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3],ans[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            ans[i][j]=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            arr[i][j]=arr[i][j]%2;
            //ans[i][j]=arr[i][j];
            if(arr[i][j]==1)
            {
                ans[i][j]=(ans[i][j]+1)%2;
                if(j+1<3)
                    ans[i][j+1]=(ans[i][j+1]+1)%2;
                if(i+1<3)
                    ans[i+1][j]=(ans[i+1][j]+1)%2;
                if(j-1>-1)
                    ans[i][j-1]=(ans[i][j-1]+1)%2;
                if(i-1>-1)
                    ans[i-1][j]=(ans[i-1][j]+1)%2;
                
            }

        }
        
    }
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)

                cout<<ans[i][j];
            cout<<""<<endl;
        }
    return 0;
}