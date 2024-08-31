#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> ans;
    int n, k;
    cin >> n >> k;
    for (size_t i = 2; i <= n; i++)
    {
        if (find(ans.begin(), ans.end(), i) == ans.end())
        {
            for (size_t j = i; j <= n; j += i)
            {
                if (find(ans.begin(), ans.end(), j) == ans.end())
                {
                    ans.push_back(j);
                }
            }
        }
    }
    cout << ans[k - 1];
    return 0;
}