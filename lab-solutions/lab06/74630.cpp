#include <iostream>
#include <cmath>

using namespace std;

int maximum(int a, int b, int c, int d) {
    
    return max(a, max(b, max(c, d)));
}

int a, b, c, d;

int main() {

    cin>>a>>b>>c>>d;
    cout<<maximum(a, b, c, d);

    return 0;
}