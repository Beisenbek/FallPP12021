#include <iostream>

using namespace std;

struct student{
    string gpa;
    string first;
    string last;
    string getFullInfo(){
        return first + " " + last + " "  + gpa;
    }
};

int main(){

    student s1; 
    s1.gpa = "3.5";
    s1.first = "Bob";
    s1.last = "John";

    student s2; 
    s2.gpa = "4.0";
    s2.first = "Alice";
    s2.last = "John";

    cout << s1.getFullInfo() << endl;
    cout << s2.getFullInfo() << endl;


    return 0;
}