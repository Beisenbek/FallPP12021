#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<char> st;

    string str;

    cin >> str;

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '0'){
            st.push('0');
        }else if(str[i] == '1'){
            if(!st.empty() && st.top() == '1'){
                st.pop();
            }else{
                st.push('1');
            }
        }
    }

    string res = "";

    while(!st.empty()){
        res = st.top() + res;
        st.pop();
    }

    cout << res << endl;


    return 0;
}