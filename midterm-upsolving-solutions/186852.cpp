#include <iostream>

using namespace std;
 
int main()
{
    int n;
    cin >> n; 
    int temp = n; 
    int b = 0; 
 
    while (temp != 0)
    {
        b = b * 10 + temp % 10;
        temp /= 10;
    }
 
    if (n == b)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}