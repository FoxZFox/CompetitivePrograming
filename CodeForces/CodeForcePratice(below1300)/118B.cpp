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
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n * 2 + 1; i++)
    {
        if (i < n + 1)
        {
            for (int j = 0; j < n * 2 - i * 2; j++)
            {
                cout << " ";
            }
            int num = 0;
            for (int j = 0; j < 1 + i * 2; j++)
            {
                if (j >= i && num == 0)
                {
                    cout << num;
                    continue;
                }
                cout << num << " ";
                if (j >= i)
                {
                    num--;
                }
                else
                {
                    num++;
                }
            }
        }
        else
        {
            for (int j = 0; j < n * 2 - (i - n * 2) * -2; j++)
            {
                cout << " ";
            }
            int num = 0;
            for (int j = 0; j < 1 + (i - n * 2) * -2; j++)
            {
                if (j >= (i - n * 2) * -1 && num == 0)
                {
                    cout << num;
                    continue;
                }
                cout << num << " ";
                if (j >= (i - n * 2) * -1)
                {
                    num--;
                }
                else
                {
                    num++;
                }
            }
        }
        cout << '\n';
    }

    return 0;
}