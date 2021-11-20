#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<char> st;
    string str;
    cin >> str;    

    bool result = true;

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '('){
            st.push('(');
        }else if(str[i] == ')'){
            if(!st.empty()){
                st.pop();
            }else{
                result = false;
                break;
            }
        }   
    }

    if(result == false || !st.empty()){
        cout << "NO";
    }else{
        cout << "YES";
    }


    return 0;
}