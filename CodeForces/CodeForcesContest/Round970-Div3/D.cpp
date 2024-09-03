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
        vector<int> vec(n);

        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            vec[i]--;
        }
        cin.ignore();
        getline(cin, s);
        vector<int> ans(n, -1);
        for (int i = 0; i < n; i++)
        {
            int j = i;
            int count = 0;
            while (ans[j] == -1)
            {
                ans[j] = -2;
                count += (s[j] == '0');
                j = vec[j];
            }
            while (ans[j] == -2)
            {
                ans[j] = count;
                j = vec[j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}