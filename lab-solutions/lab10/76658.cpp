#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v;
	set<int> s;
	int k;
	int x;
	for(int i =0;i<n;i++){
		cin>>k;
		x = s.size();
		s.insert(k);
		if(x!=s.size()){
			v.push_back(k);
		}
	}
	do{
		for(int i = 0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}while(next_permutation(v.begin(),v.end()));



	return 0;
}