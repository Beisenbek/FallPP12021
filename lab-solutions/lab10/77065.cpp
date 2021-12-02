#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool isPrime(int n){
	if(n<0){
		n*=-1;
	}
	if(n==1 || n==0){
		return false;
	}

	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}	
	return true;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	int x = count_if(a,a+n,isPrime);
	cout<<x<<endl;

	return 0;
	
}