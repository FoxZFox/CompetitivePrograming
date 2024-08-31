#include <bits/stdc++.h>

using namespace std;

int min(int a, int b) { return (a < b ? a : b); }
int max(int a, int b) { return (a > b ? a : b); }

void printzero(int a)
{
    for (int i = 2; i <= a; i++)
        cout << "0";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, c, b;
    cin >> a >> c >> b;
    if (b == "+")
    {
        if (a[0] == b[0])
        {
            cout << "2";
            printzero(max(a.size(), b.size()));
        }
    }
    return 0;
}