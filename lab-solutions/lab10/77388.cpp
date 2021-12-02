#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void convert(int n){
	string s = "";
	if(n==0) s = "0";
	while(n!=0){
		s+=char(n%2+48);
		n/=2;
	}
	for(int i =0;i<s.size()/2;i++){
		swap(s[i],s[s.size()-1-i]);
	}
	cout<<s<<endl;
}
int main(){
	int n;
	cin>>n;
	int x;
	vector<int> v;
	for(int i = 0;i<n;i++){
		cin>>x;
		v.push_back(x);
	}
	for_each(v.begin(),v.end(),convert);


	return 0;
}