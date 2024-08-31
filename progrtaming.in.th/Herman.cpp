#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float r;
    cin >> r;
    printf("%.6f\n%.6f", M_PI * r * r, 2.000000 * r * r);
    return 0;
}