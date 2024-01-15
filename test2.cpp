#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int lengthOfLIS(vector<int>& nums)
{
 
    int n = nums.size();
    vector<int> ans;
    ans.push_back(nums[0]);
 
    for (int i = 1; i < n; i++) {
        if (nums[i] > ans.back()) {
            ans.push_back(nums[i]);
        }
        else {
            int low = lower_bound(ans.begin(), ans.end(),
                                  nums[i])
                      - ans.begin();
            ans[low] = nums[i];
        }
    }
    return ans.size();
}
 

int min_penalty(int n, vector<int>& a) {
    vector<int> prefix_penalty(n);
    vector<int> suffix_penalty(n);

    int min_value = INT_MAX;
    for (int i = 0; i < n; ++i) {
        min_value = min(min_value, a[i]);
        prefix_penalty[i] = min_value;
    }

    min_value = INT_MAX;
    for (int i = n - 1; i >= 0; --i) {
        min_value = min(min_value, a[i]);
        suffix_penalty[i] = min_value;
    }

    int overall_penalty = INT_MAX;
    for (int i = 0; i < n - 1; ++i) {
        overall_penalty = min(overall_penalty, prefix_penalty[i] + suffix_penalty[i + 1]);
    }

    return overall_penalty;
}

bool checkValid(vector<int>& vec, int n) {
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        mp[vec[i]]++;
    }
    if(mp.size() <=2) {
        return false;
    }

    return true;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    reverse(a.begin(), a.end());
    cout<<lengthOfLIS(a)<<endl;
    // if(checkValid(a, n)) {
    //      int result = min_penalty(n, a);
    //      reverse(a.begin(), a.end());
    //     cout<<min(result, n- lengthOfLIS(a)-1)<<endl;
    // }

    // else {
    //     cout << 0 << endl;
    // }
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
