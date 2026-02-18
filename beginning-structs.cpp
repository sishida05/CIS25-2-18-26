#include <iostream>
#include <string>
using namespace std;

// Declaration of a new data type called "Student"
struct Student {
    long studentID;
    string name;
    int year;
    double gpa;
};

int main() {
    // We can now define variables of our new "Student" type
    Student firstStudent;

    firstStudent.studentID = 30080170;
    firstStudent.name = "Sean";
    firstStudent.year = 2;
    firstStudent.gpa = 3.5;

    Student secondStudent;

    secondStudent.studentID = 30085254;
    secondStudent.name = "Robert";
    secondStudent.year = 1;
    secondStudent.gpa = 3.1;

    int size = 2;
    Student studentArray[size] = {firstStudent, secondStudent};

    for (int i = 0; i < size; i++) {
        cout << "The student at index " << i << " has the name " << studentArray[i].name << " and ID " << studentArray[i].studentID << endl;
    }

    return 0;
}
