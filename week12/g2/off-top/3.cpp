#include <iostream>
#include <vector>
using namespace std;

double a[101];

struct gpa{
    int a1;
    int a2;
    int f;
    int c;
    void readData(){
       cin >> a1 >> a2 >> f >> c;
    }
    double calcGPAValue(){
        if(a1 + a2 < 30 || f < 20) return 0;
        return a[a1 + a2 + f] * c;
    }
};


int main(){

    for(int i = 0; i < 50; ++i){
        a[i] = 0;
    }
    double cnt = 1.0;
    for(int i = 50; i < 100; i+=5){
        a[i] = a[i + 1] = a[i + 2] = a[i + 3]  = a[i + 4 ] = cnt;
        cnt += 1.0/3;
    }
    a[100] = 4.0;

    int n;
    cin >> n;

    vector<gpa> v(n);

    for(int i = 0; i < n; ++i){
        v[i].readData();
    }

    double total = 0;
    int sum = 0;
    for(int i = 0; i < n; ++i){
        total += v[i].calcGPAValue();
        sum += v[i].c;
    }
    cout << total/sum;
   
 
    return 0;
}

