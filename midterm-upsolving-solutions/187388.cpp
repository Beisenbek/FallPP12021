#include <bits/stdc++.h>

using namespace std;



int main() {
	string s;
	cin >> s;
	bool singleCharAppeared = false;
	bool isOK = true;
	for(char c = 'a'; c <='z'; ++c){
	    int cnt = 0;
	    bool needCheck = false;
	    for(int i = 0; i < s.size(); ++i){
	        if(s[i] == c){
	            cnt++;
	            needCheck = true;
	        }
	    }
	    if(needCheck){
    	    if(cnt % 2 == 1){
    	        if(singleCharAppeared == false){
    	            singleCharAppeared = true;
    	        }else {
    	           isOK = false;
    	           break;
    	        }
    	    }
	    }
	}
	if(!isOK){
	    cout << "Onepiece\n";
	}else{
	    cout << "Luffy is the pirate king!\n";
	}
	
	return 0;
}