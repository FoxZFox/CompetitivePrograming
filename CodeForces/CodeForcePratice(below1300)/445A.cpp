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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '-')
            {
                cout << "-";
                continue;
            }
            if ((i + j) % 2 == 1)
            {
                cout << "W";
            }
            else
            {
                cout << "B";
            }
        }
        cout << "\n";
    }

    return 0;
}