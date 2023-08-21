#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while(t--){
        int n;
        cin >> n; 
        string s;
        cin >> s; 
        char mini=s[0];
        int ind=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]<=mini)
            {
                ind=i;
                mini=s[i];
            }
        }
        
        cout << s[ind] << s.substr(0, ind) << s.substr(ind + 1) << endl;
    }

    return 0;
}
