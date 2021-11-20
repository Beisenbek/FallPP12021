#include <iostream>
#include <stack>

using namespace std;

int main(){

    string str;
    cin >> str;

    stack<char> st;

    bool result = true;

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '{' || str[i] == '[' || str[i] == '(' ){
            st.push(str[i]);
        }else{
            if(st.empty()){
                result = false;
                break;
            }else{
                if(str[i] == ')' && st.top() != '('){
                    result = false;
                    break;
                }
                else if(str[i] == ']' && st.top() != '['){
                    result = false;
                    break;
                }else if(str[i] == '}' && st.top() != '{'){
                    result = false;
                    break;
                }
                st.pop();
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