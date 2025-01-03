#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
#define llmax LONG_LONG_MAX
#define llmin LONG_LONG_MIN
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define fi first
#define se second
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    int A, B, C;
    cin >> A >> B >> C;
    for (int a = 1; a <= A; a++)
    {
        for (int b = -abs(C); b <= abs(C); b++)
        {
            if (b != 0 && C % b == 0 && A % a == 0)
            {
                int c = A / a;
                int d = C / b;
                if (a * d + b * c == B)
                {
                    cout << a << " " << b << " " << c << " " << d;
                    return 0;
                }
            }
        }
    }

    cout << "No Solution";

    return 0;
}