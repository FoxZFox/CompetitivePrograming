#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << -1;
        return 0;
    }
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " " << i - 1 << " ";
    }
    return 0;
}