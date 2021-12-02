#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    int humans = 0;
    int orks = 0;
    int dragons = 0;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] == 'H')
        {
            humans++;
        }
        if (a[j] == 'D')
        {
            dragons++;
        }
        if (a[j] == 'O')
        {
            orks++;
        }
    }
    cout << "Orks:"
         << " " << orks / 3 << endl;
    cout << "Dragons:"
         << " " << dragons / 3 << endl;
    cout << "Humans:"
         << " " << humans / 3 << endl;
    return 0;
}