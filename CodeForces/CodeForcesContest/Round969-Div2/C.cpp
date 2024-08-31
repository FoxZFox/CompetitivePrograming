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

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        int m = INT_MAX, x = 0;
        cin >> n >> a >> b;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int d = gcd(a, b);
        m = *min_element(all(vec));
        x = *max_element(all(vec));
        int middle = x - m;
        cout << middle % d << "\n";
    }

    return 0;
}