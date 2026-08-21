#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Course.h"

using namespace std;

class Student{

private:
    double gpa;
    int totalCredits;
    vector<Course> courses;

public:
    string name;

    Student(string n, double g, int t){
        name = n;
        gpa = g;
        totalCredits = t;
    }

    void addCourse(Course c){
        courses.push_back(c);
    }

    double calculateGPA(){

        double totalPoints = 0;
        int credits = 0;

        for(int i = 0; i < courses.size(); i++){
            totalPoints += courses[i].getTotalPoints();
            credits += courses[i].getCredits();
        }

        return totalPoints / credits;
    }

    void printTranscript(){

        cout << setw(50) << "Student Grade Report" << endl;
        cout << "Student: " << name << endl << endl;

        cout << setw(20) << left << "Course"
             << setw(10) << "Credits"
             << setw(12) << "Grade Pts"
             << setw(12) << "Total Pts" << endl;

        cout << setfill('-') << setw(54) << "-" << endl;

        for(int i = 0; i < courses.size(); i++){

            cout << setfill(' ')
                 << setw(20) << left << courses[i].getName()
                 << setw(10) << courses[i].getCredits()
                 << setw(12) << courses[i].getGradePoints()
                 << setw(12) << courses[i].getTotalPoints()
                 << endl;
        }

        cout << endl;

        double gpa = calculateGPA();

        cout << "Semester GPA: " << gpa << endl;

        if(gpa >= 3.7)
            cout << "Standing: Dean's List" << endl;
        else if(gpa >= 2.0)
            cout << "Standing: Good Standing" << endl;
        else
            cout << "Standing: Probation" << endl;
    }

};

#endif