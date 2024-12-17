#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int r, l, b, t, m, n, d, i, j;
    m = matrix.size();
    n = matrix[0].size();
    r = n;
    b = m;
    t = 0;
    l = -1;
    d = 0;
    i = 0, j = 0;
    while (ans.size() != m * n)
    {
        switch (d)
        {
        case 0:
            while (j < r)
            {
                ans.push_back(matrix[i][j]);
                j++;
            }
            r--;
            j--;
            d = 1;
            i++;
            break;
        case 1:
            while (i < b)
            {
                ans.push_back(matrix[i][j]);
                i++;
            }
            i--;
            j--;
            d = 2;
            b--;
            break;
        case 2:
            while (j > l)
            {
                ans.push_back(matrix[i][j]);
                j--;
            }
            i--;
            j++;
            l++;
            d = 3;
            break;
        case 3:
            while (i > t)
            {
                ans.push_back(matrix[i][j]);
                i--;
            }
            i++;
            j++;
            d = 0;
            t++;
        }
    }
    return ans;
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    vector<vector<int>> vc = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    for (auto &x : spiralOrder(vc))
    {
        cout << x << ",";
    }
    return 0;
}