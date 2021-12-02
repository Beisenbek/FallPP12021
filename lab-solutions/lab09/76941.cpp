#include<iostream>
#include<map>

using namespace std;

int n;
map<string, int> q;
int main(){
	cin >> n;
	for(int i = 1; i <= n; ++i){
		string s;
		cin >> s;
		if(!q[s])
			q[s] = i;
	}
	for(map<string, int> :: iterator it = q.begin(); it != q.end(); ++it){
		cout << it->first << " " << it->second << "\n";
	}
	return 0;
}