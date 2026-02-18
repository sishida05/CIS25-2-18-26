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

struct School {
    int schoolSystemID;
    string name;
    Student[] students;
    Student valedictorian;
};

struct schoolSystem {
    int schoolSystemID;
};

int main() {

    return 0;
}
