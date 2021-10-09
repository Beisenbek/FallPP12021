#include <iostream>

using namespace std;

void print(int a[], int n){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
}

void read(int a[], int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

int exists(int a[], int n, int x){
    int res = false;
    for(int i = 0; i < n; ++i){
        if(a[i] == x){
            res++;
        }            
    }
    return res;
}

void print_unique(int a[], int n){
    for(int i = 0; i < n; ++i){
        if(!exists(a, i, a[i])){
            cout << a[i] << " ";
        }        
    }
}

int count(int a[], int b[], int n){
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(exists(a, i, a[i]) == 0){
            cnt += exists(b, n, a[i]);
        }        
    }
    return cnt;
}

int main(){

    int n;
    cin >> n;
    int a[n], b[n];

    read(a, n);
    read(b, n);


    cout << count(a, b, n) << endl;

   
    return 0;
}