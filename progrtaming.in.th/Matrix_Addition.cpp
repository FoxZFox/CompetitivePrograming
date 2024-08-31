#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    for (size_t i = 0; i < m * 2; i++)
    {
        for (size_t j = 0; j < n; j++)
        {

            if (i > m - 1)
            {
                int ans = arr[i - m][j];
                cin >> arr[i - m][j];
                arr[i - m][j] += ans;
                continue;
            }
            cin >> arr[i][j];
        }
    }
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}