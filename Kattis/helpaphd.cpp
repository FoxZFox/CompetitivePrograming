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
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        if (s == "P=NP")
        {
            cout << "skipped";
        }
        else
        {
            int n1 = 0, n2 = 0;
            bool sw = false;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '+')
                {
                    sw = true;
                    ++i;
                }
                if (!sw)
                    n1 = n1 * 10 + (s[i] - '0');
                else
                    n2 = n2 * 10 + (s[i] - '0');
            }
            cout << n1 + n2;
        }
        cout << "\n";
    }

    return 0;
}