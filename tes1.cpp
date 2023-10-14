#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> vec(3);
        for (int i = 0; i < 3; i++)
            cin >> vec[i];

        sort(vec.begin(), vec.end(), greater<int>());

        if (vec[0] == vec[1] && vec[1] == vec[2])
        {
            cout << "YES" << endl;
            continue;
        }

        bool possible = true;
        int operations = 0;

        if (vec[0] % vec[2] != 0 || vec[1] % vec[2] != 0)
            possible = false;

        while (vec[0] != vec[2])
        {
            if (vec[0] % vec[2] != 0 || operations > 3)
            {
                possible = false;
                break;
            }
            vec[0] -= vec[2];
            operations++;
        }

        while (vec[1] != vec[2])
        {
            if (vec[1] % vec[2] != 0 || operations > 3)
            {
                possible = false;
                break;
            }
            vec[1] -= vec[2];
            operations++;
        }

        if (operations > 3)
            possible = false;

        if (possible)
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
