#include <iostream>

using namespace std;

void reverse_print(int a[], int len) {
    for (int i = len - 1; i >= 0; i--) {
        cout<<a[i]<<" ";
    }
}

int n, arr[500500];

int main() {
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    reverse_print(arr, n);

    return 0;
}