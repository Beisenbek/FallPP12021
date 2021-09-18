//63
//https://informatics.msk.ru/mod/statements/view.php?chapterid=63#1
#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;


int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; i += 2){
        cout << a[i] << " ";
    }

    return 0;
}