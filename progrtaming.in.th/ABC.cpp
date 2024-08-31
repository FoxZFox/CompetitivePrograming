#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[3];
    string abc;
    for (size_t i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    cin >> abc;
    sort(begin(arr), end(arr));
    cout << arr[abc[0] - 'A'] << " " << arr[abc[1] - 'A'] << " " << arr[abc[2] - 'A'];
    return 0;
}