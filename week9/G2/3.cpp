#include <iostream>

using namespace std;

long long my_super_array[50];

long long f(int n){
    if(n >= 50) return -1;
    if(my_super_array[n] == -1){
        my_super_array[n] = f(n - 1) + f(n - 2);
    }
    return my_super_array[n];
}

int main(){

    int x;
    cin >> x;

    for(int i = 0; i < 50; ++i){
        my_super_array[i] = -1;
    }

    my_super_array[0] = my_super_array[1] = 1;

    cout << f(x) << endl;

    return 0;
}