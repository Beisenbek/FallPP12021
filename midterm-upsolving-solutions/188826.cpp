#include <iostream>

using namespace std;

//filtered-words
//Zhasikone and Dimashka wants to find filtered words
//

int main()
{
    string s;
    string temp = "";

    while (cin >> s)
    {
        for (int i = 0; i < s.size(); ++i)
        {
            if (('A' <= s[i] and s[i] <= 'Z') or ('a' <= s[i] and s[i] <= 'z'))
            {
                temp += s[i];
            }
        }
        cout << temp << endl;
        temp = "";
    }

    return 0;
}
