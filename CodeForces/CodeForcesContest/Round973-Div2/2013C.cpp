#include <bits/stdc++.h>
#define f first
#define s second

using namespace std;
using li = long long;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t; // 4

    while (t--)
    {
        int n;
        cin >> n; // 3

        string s = "";

        cout << "? 0" << endl;

        int f;
        cin >> f; // 0

        if (f)
            s = "0";
        else
            s = "1";

        bool F = 0;

        while (s.size() < n)
        {
            if (!F)
            {
                cout << "? " << s + '0' << endl;
                int f1;
                cout << f1 << endl;
                cout << "? " << s + '1' << endl;
                int f2;
                cout << f2 << endl;

                if (f1)
                    s += '0';
                else if (f2)
                    s += '1';
                else
                    F = 1;
            }
            else
            {
                cout << "? " << "0" + s << endl;
                int f;
                cin >> f;

                if (f)
                    s = "0" + s;
                else
                    s = "1" + s;
            }
        }

        cout << "! " << s << endl;
    }
}