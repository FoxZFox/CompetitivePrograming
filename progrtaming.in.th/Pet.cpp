#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int challenger[5][4];
    int ans[2] = {0, 0};
    for (size_t i = 0; i < 5; i++)
    {
        int sum = 0;
        for (size_t j = 0; j < 4; j++)
        {
            cin >> challenger[i][j];
            sum += challenger[i][j];
        }
        if (sum > ans[1])
        {
            ans[0] = i;
            ans[1] = sum;
        }
    }
    cout << ans[0] + 1 << " " << ans[1];
    return 0;
}