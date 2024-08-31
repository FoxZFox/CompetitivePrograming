#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<vector<int>> vec(5, vector<int>(5, 2));
    int r, c;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int t;
            cin >> t;
            if (t == 1)
            {
                r = i + 1;
                c = j + 1;
            }
            vec[i][j] = t;
        }
    }

    int ans = abs(3 - r) + abs(3 - c);
    cout << ans;
    return 0;
}