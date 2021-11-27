#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student{
    double gpa;
    string first;
    string last;
    void printFullInfo(){
        cout << last << " " << first << " "  << gpa << endl;
    }
};

int main(){

    student st;
    st.gpa = 4.0;
    st.first = "Bob";
    st.last = "John";

    st.printFullInfo();
 
    return 0;
}