#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define loop(a, b, c) for (int a = b; a < c; a++)
#define loope(a, b, c) for (int a = b; a <= c; a++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, ans = 0;
    cin >> n;
    vector<pair<int, int>> vec(n);
    loop(i, 0, n)
    {
        cin >> vec[i].first >> vec[i].second;
    }
    loop(i, 0, n)
    {
        unordered_set<int> shape;
        int x1 = vec[i].first, y1 = vec[i].second;
        loop(j, 0, n)
        {
            if (j == i)
                continue;
            int x2 = vec[j].first, y2 = vec[j].second;
            if (x1 == x2)
            {
                if (y1 > y2)
                {
                    shape.insert(1);
                }
                else
                {
                    shape.insert(2);
                }
            }
            else if (y1 == y2)
            {
                if (x1 > x2)
                {
                    shape.insert(3);
                }
                else
                {
                    shape.insert(4);
                }
            }
        }
        if (shape.size() == 4)
        {
            ans++;
        }
    }

    cout << ans;
    return 0;
}