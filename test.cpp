// #include <iostream>
// #include <map>
// #include <vector>
// #include <bits/stdc++.h>
// #include <math.h>
// using namespace std;

// #define endl '\n'
// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// // bool hasEqualJuiceSubarray(vector<int>& glasses) {
// //     int n = glasses.size();
// //     unordered_map<int, int> prefixSumOdd;
// //     unordered_map<int, int> prefixSumEven;

// //     int sumOdd = 0, sumEven = 0;

// //     prefixSumOdd[0] = 0;
// //     prefixSumEven[0] = 0;

// //     for (int i = 0; i <n; ++i) {
// //         if (i % 2 == 0) {
// //             sumEven += glasses[i];
// //             if (prefixSumOdd.find(sumEven) != prefixSumOdd.end()) {
// //                 return true;
// //             }
// //             prefixSumEven[sumEven] = i;
// //         } else {
// //             sumOdd += glasses[i];
// //             if (prefixSumEven.find(sumOdd) != prefixSumEven.end() ) {
// //                 return true;
// //             }
// //             prefixSumOdd[sumOdd] = i;
// //         }
// //     }

// //     return false;
// // }

// bool hasEqualJuiceSubarray(vector<int>& glasses) {
//     int n = glasses.size();
//     unordered_map<int, vector<int>> prefixSumOdd;
//     unordered_map<int, vector<int>> prefixSumEven;

//     int sumOdd = 0, sumEven = 0;

//     prefixSumOdd[0].push_back(0);
//     prefixSumEven[0].push_back(0);

//     for (int i = 0; i < n; ++i) {
//         if (i % 2 == 0) {
//             sumEven += glasses[i];
//             prefixSumEven[sumEven].push_back(i);
//         } else {
//             sumOdd += glasses[i];
//             prefixSumOdd[sumOdd].push_back(i);
//         }
//     }

//     for (auto& it : prefixSumOdd) {
//         auto& indices = it.second;
//         if (indices.size() > 1) {
//             sort(indices.begin(), indices.end());
//             for (int i = 1; i < indices.size(); ++i) {
//                 if (indices[i] - indices[i - 1] > 1) {
//                     return true;
//                 }
//             }
//         }
//     }

//     for (auto& it : prefixSumEven) {
//         auto& indices = it.second;
//         if (indices.size() > 1) {
//             sort(indices.begin(), indices.end());
//             for (int i = 1; i < indices.size(); ++i) {
//                 if (indices[i] - indices[i - 1] > 1) {
//                     return true;
//                 }
//             }
//         }
//     }

//     return false;
// }

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> vec(n), v(n);
//     for (int i = 0; i < n; i++) {
//         cin >> vec[i];
//         v[i] = vec[i];
//     }
//     reverse(v.begin(), v.end());
//     cout << (hasEqualJuiceSubarray(vec) ? "YES" : "NO") << endl;
// }


// int main()
// {
//     fastio();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }



#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

#define endl '\n'
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool hasEqualJuiceSubarray(vector<int>& glasses) {
    int n = glasses.size();
    unordered_map<int, int> prefixSumOdd;
    unordered_map<int, int> prefixSumEven;

    int sumOdd = 0, sumEven = 0;

    prefixSumOdd[0] = -1;  // Initialize with -1 for handling edge case
    prefixSumEven[0] = -1;

    int equalSum = 0;

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            sumEven += glasses[i];
            if (prefixSumOdd.find(sumEven) != prefixSumOdd.end()) {
                equalSum = max(equalSum, i - prefixSumOdd[sumEven]);
            }
            prefixSumEven[sumEven] = i;
        } else {
            sumOdd += glasses[i];
            if (prefixSumEven.find(sumOdd) != prefixSumEven.end()) {
                equalSum = max(equalSum, i - prefixSumEven[sumOdd]);
            }
            prefixSumOdd[sumOdd] = i;
        }
    }

    return equalSum >= 2;
}

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n), v(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        v[i] = vec[i];
    }
    reverse(v.begin(), v.end());
    cout << (hasEqualJuiceSubarray(vec) ? "YES" : "NO") << endl;
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
