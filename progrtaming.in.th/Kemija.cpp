#include <bits/stdc++.h>

using namespace std;

char c[6] = {'a', 'e', 'i', 'o', 'u'};

string decryp(string s)
{
    string de = s;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (find(begin(c), end(c), de[i]) != end(c) && de[i + 1] == 'p' && find(begin(c), end(c), de[i + 2]) != end(c))
        {
            de.erase(i + 1, 2);
        }
    }

    return de;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    getline(cin, s);
    cout << decryp(s);
    return 0;
}