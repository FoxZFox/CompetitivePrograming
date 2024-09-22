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
    int n, m, ans1 = 0, ans2 = 0;
    cin >> n >> m;
    vector<int> a1(m);
    vector<int> a2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
        a2[i] = a1[i];
    }
    sort(rall(a1));
    sort(all(a2));
    int p2 = 0;
    for (int i = 0; i < n; i++)
    {
        while (1)
        {
            int mp = 0;
            int in = -1;
            for (int i = 0; i < m; i++)
            {
                if (a1[i] > mp)
                {
                    mp = a1[i];
                    in = i;
                }
            }
            ans1 += a1[in]--;
            break;
        }
        while (1)
        {
            if (a2[p2 % m] != 0)
            {
                ans2 += a2[p2 % m]--;
                break;
            }
            else
            {
                p2++;
            }
        }
    }
    cout << ans1 << " " << ans2;
    return 0;
}