#include <iostream>
#include <map>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m;
	map<string,double> mp;
	int total = 0;
	string s;
	int x;
	for(int i =0;i<n;i++){
		cin>>m;
		for(int  j = 0;j<m;j++){
			cin>>s>>x;
			mp[s]+=x;
			total+=x;
		}
	}
	map<string,double>::iterator it;
	for(it = mp.begin();it!=mp.end();it++){
		(*it).second = (*it).second/total * 100;
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}






	return 0;
}