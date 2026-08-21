#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

class Course{

private:
    string letterGrade;
    string courseName;
    int creditHours;
    double numGrade;

public:

    Course(string name, int credits, string letter, double points){
        courseName = name;
        creditHours = credits;
        letterGrade = letter;
        numGrade = points;
    }

    string getName() const{
        return courseName;
    }

    int getCredits() const{
        return creditHours;
    }

    string getLetterGrade() const{
        return letterGrade;
    }

    double getGradePoints() const{
        return numGrade;
    }

    double getTotalPoints() const{
        return creditHours * numGrade;
    }

};

#endif