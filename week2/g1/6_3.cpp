#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int x;

    int i = 0;

    for(;;){
        if(i < n){
           break;     
        }
        cin >> x;
        cout << x << " ";
        i = i + 1;//++i i++
    }


    return 0;
}