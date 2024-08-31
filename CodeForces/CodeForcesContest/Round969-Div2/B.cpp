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
    int t, n, m, index;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<ll> vec(n);
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if (vec[i] > max)
            {
                max = vec[i];
                index = i;
            }
        }
        while (m--)
        {
            char o;
            int l, r, max = 0;
            cin >> o >> l >> r;
            if (vec[index] >= l && vec[index] <= r)
            {
                if (o == '+')
                    vec[index]++;
                else if (o == '-')
                    vec[index]--;
            }
            cout << vec[index] << ' ';
            // for (int i = 0; i < n; i++)
            // {
            //     if (vec[i] >= l && vec[i] <= r)
            //     {
            //         if (o == '+')
            //             vec[i]++;
            //         else if (o == '-')
            //             vec[i]--;
            //     }
            //     if (vec[i] > max)
            //     {
            //         max = vec[i];
            //     }
            // }
            // cout << max << " ";
        }
        cout << "\n";
    }
    return 0;
}