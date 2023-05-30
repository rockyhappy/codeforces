#include<bits/stdc++.h>
using namespace std;
bool check(int );
int main()
{
    int year;
    cin>>year;
    for(int i=year+1;i<=9000;i++)
    {
        if(check(i)==true)
            {
                cout<<i<<endl;
                return 0;
            }
    }
}
bool check(int n)
{
    int firstdigit=n%10;
    n/=10;
    int secondDigit=n%10;
    n/=10;
    int ThirdDigit =n%10;
    n/=10;
    int fourthDigit=n%10;
    if(firstdigit!=secondDigit && secondDigit != ThirdDigit && ThirdDigit!=fourthDigit &&
    firstdigit!=ThirdDigit&&firstdigit!=fourthDigit&&secondDigit!=fourthDigit)
        return true;
     return false;
}