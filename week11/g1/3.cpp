#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> st;
    int n, x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        st.push(x);
    }

    while(!st.empty()){
        int cur = st.top();
        cout << cur << " ";
        st.pop();
    }


    return 0;
}