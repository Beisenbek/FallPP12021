//70
//https://informatics.msk.ru/mod/statements/view.php?chapterid=70#1
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }


    for(int i = 1; i < n; i+=2){
        swap(a[i], a[i - 1]);
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }


    return 0;
}   