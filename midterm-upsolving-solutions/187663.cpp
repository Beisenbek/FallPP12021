#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int b=n.size() + 2;
    char mas[3][b];
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i <b;i++)
        {
            mas[j][i]='+';
        }
    }
    for (int i = 0; i < b-2;i++)
    {
        mas[1][i + 1] = n[i];
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i <b;i++)
        {
            cout<<mas[j][i];
        }
        cout<<endl;
    }
    return 0;
}