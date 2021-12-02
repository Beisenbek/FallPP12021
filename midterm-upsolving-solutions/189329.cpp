#include <iostream>

using namespace std;

//max-gcd

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    int max = -10000000;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int gc = gcd(arr[i], arr[j]);
            if (max < gc)
                max = gc;
        }
    }
    cout << max;
}