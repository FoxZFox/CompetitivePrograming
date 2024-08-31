#include <iostream>
int gcd(int a, int b);
using namespace std;

int main()
{
    int a, b, resault = 1;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}