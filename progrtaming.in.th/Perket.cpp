#include <bits/stdc++.h>

using namespace std;

int ans = INT_MAX, n;
vector<int> s;
vector<int> b;
void recurse(int i, int ss, int bb)
{
    if (i == n)
    {
        if (ans > abs(ss - bb) && bb > 0)
        {
            ans = abs(ss - bb);
        }
    }
    else
    {

        recurse(i + 1, ss * s[i], bb + b[i]);
        recurse(i + 1, ss, bb);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int a, c;
        cin >> a >> c;
        s.push_back(a);
        b.push_back(c);
    }
    recurse(0, 1, 0);
    cout << ans;
    return 0;
}