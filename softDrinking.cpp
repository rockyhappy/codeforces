/**
 * This is a codeforces problem and the solution for the same 
 * the problem link is 
 * https://codeforces.com/problemset/problem/133/A
 * The solution of the problem marked below is correct
 * 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    // n is number of friends
    //k is the number of bottels bought
    //l is the quantity of the fluid stored in the bottles
    // c is the number of limes bought
    // d is the total number of slices per lime
    // p is the grams of salt they have
    int totalMililiters =(k*l)/(n*nl);
    int total=min(totalMililiters,(c*d)/n);
    cout<<min(total,p/(np*n))<<endl;
    return 0;


}