#include <iostream>

using namespace std;

int main(){

    string str;

    cin >> str;

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '1'){
            if(i > 0 && str[i-1] == '1'){
                str[i] = 'x';
                str[i - 1] = 'x';
            }
        }
    }

    for(int i = 0; i < str.size(); ++i){
        if(str[i] != 'x'){
            cout << str[i];
        }
    }


    return 0;
}