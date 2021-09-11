#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;


int main(){

    int a,b,c;
    cin >> a >> b >> c;

    if(a + b > c){
        if(a + c > b){
            if(c + b > a){
                cout << "YES";
            }else{
                cout << "NO";
            }
        }else{
            cout << "NO";
        }
    }else{
        cout << "NO";
    }
    
    return 0;
}