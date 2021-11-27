#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student{
    double gpa;
    string first;
    string last;
    student(){
        gpa = 0;
        first = "N/A";
        last = "N/A";
    }
    student(double _gpa, string _first,string _last){
        gpa = _gpa;
        first = _first;
        last = _last;
    }
    void printFullInfo(){
        cout << last << " " << first << " "  << gpa << endl;
    }
};

int main(){


    student st;
    st.printFullInfo();

    student st2(3.5, "A", "B");
    st2.printFullInfo();

    student * st3 = new student(2.5, "A2", "B2");
    st3->printFullInfo();
 
    return 0;
}