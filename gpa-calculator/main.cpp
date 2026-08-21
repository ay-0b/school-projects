//Student Grade Sheet (GPA Calculator / Transcript)

#include <iostream>
#include <string>
#include <iomanip>
#include "Course.h"
#include "Student.h"

using namespace std;

int main(){

    string name;

    cout << "Welcome to transcript reporter!\n\n";
    cout << "Please enter your name: ";
    getline(cin, name);

    Student student(name,0,0);

    int n;

    cout << "How many courses? ";
    cin >> n;

    for(int i = 0; i < n; i++){

        string courseName;
        int credits;
        string letter;
        double points;

        cout << "\nCourse name: ";
        cin >> courseName;

        cout << "Credits: ";
        cin >> credits;

        cout << "Letter grade: ";
        cin >> letter;

        cout << "Grade points: ";
        cin >> points;

        Course c(courseName, credits, letter, points);

        student.addCourse(c);
    }

    cout << endl;

    student.printTranscript();

    return 0;
}