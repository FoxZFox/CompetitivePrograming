#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < (n % 2 == 0 ? n - 1 : n); j++)
        {
            if (i == 0 && j == (n % 2 == 0 ? n - 1 : n) / 2)
            {
                cout << "*";
            }
            else if (n % 2 == 0)
            {
                if (j == (n - 1) / 2 - i || j == (n - 1) / 2 + i || (i == n / 2 && j == 0) || (i == n / 2 && j == n - 2) || (i > n / 2 && j == n / 2 - (n / 2 - ((i - 1) - n / 2) - 1)) || (i >= n / 2 && j == n / 2 + (n / 2 - ((i - 1) - n / 2) - 3)))
                {
                    cout << "*";
                }
                else
                {
                    cout << "-";
                }
            }
            else if (j == n / 2 - (i <= n / 2 ? i : (n / 2 - ((i - 1) - n / 2) - 1)) || j == n / 2 + (i <= n / 2 ? i : (n / 2 - ((i - 1) - n / 2) - 1)))
            {
                cout << "*";
            }
            else
            {
                cout << "-";
            }
        }
        cout << "\n";
    }

    return 0;
}