//63
//https://informatics.msk.ru/mod/statements/view.php?chapterid=63#1
#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;


int main(){

    int n, x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        if(i % 2 == 0){
            cout << x << " ";
        }
    }

    return 0;
}