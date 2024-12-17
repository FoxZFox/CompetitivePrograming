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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        vector<int> v2(200001, 0);
        vector<bool> use(200001, false);
        int next = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            use[v[i]] = true;
        }

        for (auto i : v)
        {
            if (v2[i] == 0)
            {
                cout << i << " ";
                v2[i]++;
            }
            else
            {
                while (next <= 200000 && use[next])
                {
                    ++next;
                }
                cout << next << " ";
                use[next] = true;
            }
        }
        cout << "\n";
    }

    return 0;
}