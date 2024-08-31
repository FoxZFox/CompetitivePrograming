#include <iostream>
#include <set>

using namespace std;

set<int> s;

int main()
{
    int a;
    for (size_t i = 0; i < 10; i++)
    {
        cin >> a;
        s.insert(a % 42);
    }
    cout << s.size();
    return 0;
}