#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    string grade = "FFFFFDCBAAA";
    cin >> a >> b >> c;
    float ans = (float)(a + b + c) / 10;
    cout << grade[floor(ans)] << (fmod(ans, 1) < 0.5 ? "" : ans > 5 && ans < 8 ? "+"
                                                                               : "");
    return 0;
}