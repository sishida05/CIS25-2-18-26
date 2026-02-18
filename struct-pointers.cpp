#include <iostream>
#include <string>
using namespace std;

struct Student {
    long studentID;
    string name;
};

void displayStudent(const Student *s) {
    cout << "--- Displaying Student Data ---" << endl;
    // Use the arrow operator to access members via the pointer
    cout << "ID: " << s->studentID << endl;
    cout << "Name: " << s->name << endl;
}

int main() {
   
    Student * newStudent = new Student;
    //These two are exactly the same
    (*newStudent).studentID = 55123; //Pointer Notation
    newStudent->studentID = 55123; //Arrow Notation
    
    (*newStudent).name = "Frank Miller";
   
   
    // Student newStudent = {55123, "Frank Miller"};

    // Student *studentPtr = &newStudent;

    // // Access members using the dereference/dot operator method
    // cout << "Accessing via (*studentPtr).name: " << (*studentPtr).name << endl;

    // // Access members using the arrow operator
    // cout << "Accessing via studentPtr->name: " << studentPtr->name << endl;

    // displayStudent(studentPtr);

    return 0;
}
