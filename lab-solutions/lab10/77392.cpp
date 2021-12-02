#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int x = 0;
long long npower(){
	long long k = pow(x,x);
	++x;
	return k;
}
int main(){
	int n;
	cin>>n;
	vector<long long> v(n+1);
	generate(v.begin(),v.end(),npower);
	for(int i = 0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	return 0;
}