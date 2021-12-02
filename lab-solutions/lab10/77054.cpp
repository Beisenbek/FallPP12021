#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	int m;
	cin>>n>>m;
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	reverse(a,a+n);
	rotate(a,a+n-m,a+n);
	for(int i =0;i<n;i++){
		cout<<a[i]<<" ";
	}




	return 0;
}