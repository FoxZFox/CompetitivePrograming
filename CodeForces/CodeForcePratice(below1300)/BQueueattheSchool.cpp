#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, t;
    string s, tem;
    cin >> n >> t;
    getline(cin, tem);
    getline(cin, s);
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                s[j] = 'G';
                s[j + 1] = 'B';
                j++;
            }
        }
    }
    cout << s;
    return 0;
}