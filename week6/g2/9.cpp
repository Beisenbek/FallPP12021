#include <iostream>

using namespace std;


bool isVowel(char c){
    bool res = false;
    char ch[] = {'a','e','o','u', 'i', 'A', 'E', 'O', 'U', 'I'};
    int n = sizeof(ch) / sizeof(ch[0]);

    for(int i = 0; i < n; ++i){
        if(ch[i] == c){
            res = true;
            break;
        }
    }
    return res;
}

string removeVowels(string s){
    string res = "";
    for(int i = 0; i < s.size(); ++i){
        if(!isVowel(s[i])){
            res += s[i];
        }
    }
    return res;
}


int main(){

    string str;
    getline(cin, str);

    cout << removeVowels(str) << endl;

    return 0;
}
