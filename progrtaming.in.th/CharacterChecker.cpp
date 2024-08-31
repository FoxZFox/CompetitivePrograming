#include <iostream>

using namespace std;

int main()
{
    bool upper = false, lower = false;
    string test;
    cin >> test;
    for (size_t i = 0; i < test.size(); i++)
    {
        if (test[i] >= 'a' && test[i] <= 'z')
            lower = true;
        else if (test[i] >= 'A' && test[i] <= 'Z')
            upper = true;
    }

    if (upper && lower)
        cout << "Mix";
    else if (upper)
        cout << "All Capital Letter";
    else if (lower)
        cout << "All Small Letter";

    return 0;
}