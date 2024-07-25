#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double getGradePoint(const string& grade) {
    if (grade == "A+") return 4.5;
    if (grade == "A0") return 4.0;
    if (grade == "B+") return 3.5;
    if (grade == "B0") return 3.0;
    if (grade == "C+") return 2.5;
    if (grade == "C0") return 2.0;
    if (grade == "D+") return 1.5;
    if (grade == "D0") return 1.0;
    if (grade == "F") return 0.0;
    return -1.0;
}

int main() 
{
    string courseName, grade;
    double credit, totalCredits{0.0}, totalPoints{0.0};

    for (int i{0}; i < 20; i++)
    {
        cin >> courseName >> credit >> grade;
        double gradePoint = getGradePoint(grade);

        if (gradePoint == -1.0) 
        {
            continue;
        }

        totalPoints += credit * gradePoint;
        totalCredits += credit;
    }

    double gpa = totalPoints / totalCredits;
    cout << fixed << setprecision(5) << gpa << std::endl;

    return 0;
}