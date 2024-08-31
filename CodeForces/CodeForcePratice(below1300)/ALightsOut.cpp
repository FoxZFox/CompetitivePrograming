#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int light[3][3];
    int tt;
    memset(light, 0, sizeof(light));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> tt;
            light[i][j] += tt;
            if (j + 1 < 3)
            {
                light[i][j + 1] += tt;
            }
            if (j - 1 > -1)
            {
                light[i][j - 1] += tt;
            }
            if (i + 1 < 3)
            {
                light[i + 1][j] += tt;
            }
            if (i - 1 > -1)
            {
                light[i - 1][j] += tt;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << (light[i][j] % 2 == 0 ? "1" : "0");
        }
        cout << "\n";
    }

    return 0;
};