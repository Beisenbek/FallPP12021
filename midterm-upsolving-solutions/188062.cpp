#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, a, d;
    cin >> n >> a >> d;
    cout << a << " ";
    int x = a;
    for(int i=2; i<=n; i++){
        cout << x + d << " ";
        x = x + d;
    }
    cout << endl;
    cout << "sum: " << ((a + x)*n) / 2 << endl;
    return 0;
}