#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        map<int, int> factorCounts;

        for (int num : nums)
        {
            int x = num;
            for (int factor = 2; factor * factor <= x; factor++)
            {
                while (x % factor == 0)
                {
                    factorCounts[factor]++;
                    x /= factor;
                }
            }

            if (x > 1)
            {
                factorCounts[x]++;
            }
        }

        bool isPossible = true;

        for (auto it = factorCounts.begin(); it != factorCounts.end(); ++it)
        {
            if (it->second % n != 0)
            {
                isPossible = false;
                break;
            }
        }

        if (isPossible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
