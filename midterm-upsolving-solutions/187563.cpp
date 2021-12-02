#include <iostream>
using namespace std;

int main(){
    int n, m, b;
    cin >> n >> m >> b;
    int c = n+m;
    if(((c*10)/100) >= b){
        cout << "You are my sweet baby" << endl;
    }
    else cout << "Boris, you are punished!" << endl;

    return 0;
}