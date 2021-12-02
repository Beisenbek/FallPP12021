#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int b[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	reverse(b,b+n);
	for(int i=0;i<n;i++){
		if(a[i]==a[n-1-i]){
			cout<<"OK"<<endl;
		}else{
			cout<<"Instead of "<<a[i]<<" here was "<<b[i]<<endl;
		}
	}

	return 0;
}