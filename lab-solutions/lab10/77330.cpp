#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(){
	int m,n;
	cin>>n>>m;
	vector<int> v1;
	vector<int> v2;
	int k;
	for(int i = 0;i<n;i++){
		cin>>k;
		v1.push_back(k);
	}

	for(int i = 0;i<m;i++){
		cin>>k;
		v2.push_back(k);
	}
	vector<int>:: iterator it1;
	vector<int>:: iterator it2;
	it1 = unique(v1.begin(),v1.end());
	it2 = unique(v2.begin(),v2.end());
	v1.resize(distance(v1.begin(),it1));
	v2.resize(distance(v2.begin(),it2));
	vector<int> v(v1.size() + v2.size());
	for(int i = 0;i<v.size();i+=2){
		v[i] = v1[i/2];
	}
	for(int i = 1;i<v.size();i+=2){
		v[i] = v2[i/2];
	}
	vector<int>:: iterator it;
	it = unique(v.begin(),v.end());
	v.resize(distance(v.begin(),it));
	for(int i = 0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}