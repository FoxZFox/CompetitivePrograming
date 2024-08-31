#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a, b, ans;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
            ans.append("0");
        else
            ans.append("1");
    }
    cout << ans;

    return 0;
}