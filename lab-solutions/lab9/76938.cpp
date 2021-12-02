#include<iostream>
#include<map>

using namespace std;

int n;
map<string, int> q;
int main(){
	cin >> n;
	for(int i = 0; i < n; ++i){
		string s;
		int k;
		cin >> s >> k;
		q[s] += k;
	}
	for(map<string,int> :: iterator it = q.begin(); it != q.end(); ++it){
		cout << it->first << " " << it->second << "\n";
	}

	return 0;
}