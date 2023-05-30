#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    int markedi,markedj;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                markedi=i;
                markedj=j;

            }
        }
    }
    int moves=abs(2-markedi)+abs(2-markedj);
    cout<<moves<<endl;
    return 0;
}