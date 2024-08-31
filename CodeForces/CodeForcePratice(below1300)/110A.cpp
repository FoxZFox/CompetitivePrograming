#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    getline(cin, s);
    int ans = 0;
    for (const auto i : s)
    {
        if (i == '4' || i == '7')
        {
            ans++;
        }
    }
    cout << (ans == 4 || ans == 7 ? "YES" : "NO");
    return 0;
}