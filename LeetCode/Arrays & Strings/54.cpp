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

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
}

int main()
{
    cin.tie(0)->sync_with_stdio(false);
    vector<vector<int>> vc = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (auto &x : spiralOrder(vc))
    {
        cout << x << ",";
    }
    return 0;
}