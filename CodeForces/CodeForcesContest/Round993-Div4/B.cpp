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
    cin.tie(0)->sync_with_stdio(false);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'p')
            {
                cout << 'q';
            }
            else if (s[i] == 'q')
            {
                cout << 'p';
            }
            else
            {
                cout << s[i];
            }
        }
        cout << "\n";
    }

    return 0;
}