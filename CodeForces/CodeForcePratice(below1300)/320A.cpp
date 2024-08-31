#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define ld long double
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string n;
    getline(cin, n);
    if (n[0] == '4')
    {
        cout << "NO";
        return 0;
    }
    if (n.find("444") != string::npos)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n.size(); ++i)
    {
        if (n[i] != '1' && n[i] != '4')
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}