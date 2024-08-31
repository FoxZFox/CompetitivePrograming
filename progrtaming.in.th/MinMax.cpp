#include <iostream>

using namespace std;

int main()
{
    int size, min, max;
    cin >> size;
    for (size_t i = 0; i < size; i++)
    {
        int in;
        cin >> in;
        if (i == 0)
        {
            min = in;
            max = in;
        }
        min = (in < min ? in : min);
        max = (in > max ? in : max);
    }
    cout << min << endl
         << max;
    return 0;
}