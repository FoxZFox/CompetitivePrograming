#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
#define str string
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<string> vs(n);
        cin.ignore();
        for (int i = n - 1; i >= 0; i--)
        {
            getline(cin, vs[i]);
        }

        for (auto s : vs)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '#')
                {
                    cout << i + 1 << " ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}