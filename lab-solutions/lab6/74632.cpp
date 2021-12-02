#include <iostream>
#include <cmath>

using namespace std;

int sum_of_all_numbers(int x) {
    int ans = 0;

    while (x > 0) {
        ans += x % 10;
        x /= 10;
    }

    return ans;
}

int n;

int main() {
    cin>>n;
    cout<<sum_of_all_numbers(n);
    
    return 0;
}