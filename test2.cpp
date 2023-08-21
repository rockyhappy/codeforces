#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
 
#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main()
{
  cout<<"begin"<<endl;
    long long int term=1;
    int count=40;
    while(count>=0)
    {
      term=(term*2) +1;
      count--;
    }
    cout<<term<<endl;
}