#include <iostream>
using namespace std;

long long rec(long long a, long long b, int cur){
    if(cur == 1){
		return a+b;
	}
	long long c = a+b;
    
    return rec(b, c, cur-1);
}
int main(){
    int n;
    cin>>n;
	
	
    long long a = 0, b = 1;

	if(n == 1)cout<<0;
	else if(n == 2)cout<<1;
    else cout<<rec(a, b, n-2);
    
    
}