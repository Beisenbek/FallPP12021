#include <iostream>

using namespace std;

//great-table

int main()
{
    //freopen("D:\\kbtu\\3\\2021\\acm\\1\\1\\1.txt", "r", stdin);
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i < n - 1 - j)
            {
                a[i][j] = 0;
            }
            else if (i == n - 1 - j)
            {
                a[i][j] = 1;
            }
            else if (i > n - 1 - j)
            {
                a[i][j] = 2;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
