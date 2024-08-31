#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char ball[4] = "DFF";
    char pattern[51];
    cin >> pattern;
    for (size_t i = 0; i < 50; i++)
    {
        char c;
        switch (pattern[i])
        {
        case 'A':
            c = ball[0];
            ball[0] = ball[1];
            ball[1] = c;
            break;
        case 'B':
            c = ball[1];
            ball[1] = ball[2];
            ball[2] = c;
            break;
        case 'C':
            c = ball[0];
            ball[0] = ball[2];
            ball[2] = c;
            break;
        }
    }
    cout << distance(begin(ball), find(begin(ball), end(ball), 'D') + 1);
    return 0;
}