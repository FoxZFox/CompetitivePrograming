#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int c = 0;
    cin >> s;
    cin.ignore();
    getline(cin, s);
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            c++;
        }
    }
    cout << c;
    return 0;
}