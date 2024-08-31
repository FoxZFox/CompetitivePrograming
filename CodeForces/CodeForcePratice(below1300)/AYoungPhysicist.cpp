#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> vec({0, 0, 0});
    int t;
    int x, y, z;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        cin >> x >> y >> z;
        vec[0] += x;
        vec[1] += y;
        vec[2] += z;
    }
    cout << (vec[0] == 0 && vec[1] == 0 && vec[2] == 0 ? "YES" : "NO");
    return 0;
}