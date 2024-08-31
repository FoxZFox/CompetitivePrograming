#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
    int d, m;
    cin >> d >> m;
    for (size_t i = 0; i < m - 1; i++)
    {
        d += months[i];
    }
    d = (d - 1) % 7;
    cout << day[d];
    return 0;
}