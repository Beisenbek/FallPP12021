//300 from informatics
#include <iostream>

using namespace std;

int main (){

    int n, m;
    cin >> n;
    m = n;

                 //1  2   3   4   5   6   7   8   9   10  11  12
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int s = 0;
    for(int i = 0; i < 12; ++i){
        s = s + days[i];
        if(s >= n){
            cout << m << " " <<  i + 1 << endl;
            break;
        }
        m = m - days[i];
    }

    return 0;

}   