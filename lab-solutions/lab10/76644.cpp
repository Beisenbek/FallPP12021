#include <iostream>
#include <algorithm>
using namespace std;
string tolower(string s){
	for(int i =0;i<s.size();i++){
		s[i] = s[i] + 32;
	}
	return s;
}
bool mycomp(string s1,string s2){
	tolower(s1);
	tolower(s2);
	bool ok = true;
	for(int i =0;i<s1.size();i++){
		if(i==s2.size() || s1[i]>s2[i]) return false;
		else if(s1[i]<s2[i]) return true;
	}
}
int main(){
	int n;
	cin>>n;
	string nn[n];
	int mm[n];
	
	for(int i =0;i<n;i++){
		cin>>nn[i];
		cin>>mm[i];
	}
	sort(nn,nn+n,mycomp);
	sort(mm,mm+n);
	for(int i = 0;i<n;i++){
		cout<<nn[i]<<" "<<mm[i]<<endl;
	}

	return 0;
}