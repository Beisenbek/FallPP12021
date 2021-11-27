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
    s1.gpa = "3.5";
    s1.first = "Bob";
    s1.last = "John";


    cout << s1.gpa << endl;
    cout << s1.first << endl;
    cout << s1.last << endl;

    cout << s1.getFullInfo() << endl;


    return 0;
}