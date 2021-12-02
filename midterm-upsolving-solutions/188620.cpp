#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int c = a, e = b;

    if (a & (1 << n))
        e |= (1 << n);
    else
        e &= ~(1 << n);

    if (b & (1 << n))
        c |= (1 << n);
    else
        c &= ~(1 << n);
    if (c > e)
        cout << "Good deal for the first number";
    else if (c < e)
        cout << "Good deal for the second number";
    else
        cout << "Nothing has changed";
    return 0;
}