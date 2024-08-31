#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // vector<int> p{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    unordered_map<int, int> m;
    m[2] = 3;
    m[3] = 5;
    m[5] = 7;
    m[7] = 11;
    m[11] = 13;
    m[13] = 17;
    m[17] = 19;
    m[19] = 23;
    m[23] = 29;
    m[29] = 31;
    m[31] = 37;
    m[37] = 41;
    m[41] = 43;
    m[43] = 47;
    int a, b;
    cin >> a >> b;
    if (m.find(a) != m.end())
    {
        if (m[a] == b)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}