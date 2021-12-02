#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
bool isSquare(char top, char c){
	if(top == '0') return false;
	int k = (top-48)*10 + (c-48);
	if(sqrt(k) == int(sqrt(k))){
		return true;
	}else{
		return false;
	}
}
int main(){
	string s;
	cin>>s;
	stack<char> st;
	for(int i = 0;i<s.size();i++){
		if(!st.empty()){
			if(isSquare(st.top(),s[i])){
				st.pop();
			}else{
				st.push(s[i]);
			}
		}else{
			st.push(s[i]);
		}
	}
	if(st.empty()){
		cout<<"Stack is empty"<<endl;
		return 0;
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}

	return 0;
}