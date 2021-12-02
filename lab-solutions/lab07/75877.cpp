#include <iostream>
using namespace std;
char get(int a){
    if(a >= 10){
        return 'A'+a-10;   
    }
    return a+'0';
}
void rec(int n, int k){
    if(n == 0)return;
    rec(n/k, k);
    cout<<get(n%k);
}
int main(){
    int n, k;
    cin>>n>>k;
    
    rec(n, k);
    
}