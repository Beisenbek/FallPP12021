#include <iostream>
#include <cmath>

using namespace std;
bool isPrime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a == 1)
        {
            return false;
        }
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if (isPrime(a) && a < 500 && b % 2 == 0)
    {
        cout << "Good job!";
    }
    else
    {
        cout << "Try next time!";
    }

    return 0;
}
