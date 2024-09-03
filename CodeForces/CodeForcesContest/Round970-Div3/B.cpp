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
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin.ignore();
        getline(cin, s);
        int n_sqrt = sqrt(n);
        int zerocount = count(all(s), '0');
        if (n <= 4)
        {
            if (n == 4)
            {
                cout << "yes" << "\n";
            }
            else
            {
                cout << "no" << "\n";
            }
            continue;
        }
        if (n_sqrt * n_sqrt == n)
        {
            int zero = n_sqrt - 2;
            zero = zero * zero;
            if (zero == zerocount)
            {
                cout << "yes";
            }
            else
            {
                cout << "no";
            }
        }
        else
        {
            cout << "no";
        }
        cout << "\n";
    }

    return 0;
}