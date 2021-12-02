#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    s+=" ";
    string t = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] == ' '){
            if(t.size()>=3){
            cout << t << " ";
            t = "";
            }
            else t = "";
        }
        else t+=s[i];
    }
    return 0;
}