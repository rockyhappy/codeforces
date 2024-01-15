#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool isUpper(char c) {
    return (c >= 'A' && c <= 'Z');
}

bool isLower(char c) {
    return (c >= 'a' && c <= 'z');
}

void solve() {
    string str;
    cin >> str;

    int n = str.size();
    stack<int> cap;
    stack<int> sm;
    string ans = str; // Initialize ans with the input string

    for (int i = 0; i < n; i++) {
        if (isLower(str[i]) && str[i] != 'b' && str[i] != 'B') {
            sm.push(i);
        }
        if (isUpper(str[i]) && str[i] != 'b' && str[i] != 'B') {
            cap.push(i);
        }
        if (!sm.empty() && str[i] == 'b') {
            ans[sm.top()] = '.';
            sm.pop();
            ans[i] = '.';
        }
        if (!cap.empty() && str[i] == 'B') {
            ans[cap.top()] = '.';
            cap.pop();
            ans[i] = '.';
        }
    }
    string s1="";
    for (int i = 0; i < n; i++)
    {
        if(ans[i]!='.' && ans[i]!='b' && ans[i]!='B')
        {
            s1+=ans[i];
        }
       //s1+=(ans[i]!='.' && ans[i]!='b' && ans[i]!='B')?ans[i]:' ';
        
    }
    
    cout << s1 << endl;
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
